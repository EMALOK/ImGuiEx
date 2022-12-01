#include <stddef.h>

namespace ImGuiEx {

typedef int ImGuiExFileBrowserFlags;

enum ImGuiExFileBrowserFlags_{
    ImGuiExFileBrowserFlags_None               = 0,
    ImGuiExFileBrowserFlags_MultipleSelections = 1 << 0, // allow the selection of multiple objects
    ImGuiExFileBrowserFlags_SelectFolder       = 1 << 1  // allow the selection of folders
};

// Use case:
//
//[...]
//
//static bool isFileSelected;
//static char buf[FILE_BUF_SIZE];
//
//[...]
//
//if(ImGui::Button("Open")){
//    // Use the default flags
//    ImGuiEx::OpenFileBrowser("Select project folder");
//}
//
//if(ImGuiEx::FileBrowser("Select project folder",buf,FILE_BUF_SIZE)){
//    // Event when the file/s folder/s are selected
//    // set the isFileSelected to do conditional guis
//    isFileSelected = true;
//}
//
//// Conditional Gui when the file/s folder/s are selected
//if(isFileSelected){
//
//    ImGui::Text("%s",buf);
//
//}
//
//[...]
//


// Request to open the file browser modal
void OpenFileBrowser(const char* str_id, ImGuiExFileBrowserFlags flags = 0);

// renders the modal if it is open and return true if the file selection succeded
bool FileBrowser(const char* str_id,char* buf, size_t buf_size);

};