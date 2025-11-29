@class NSString;

@interface ChatBackgroundEntranceViewController : NewSettingBaseViewController <WCActionSheetDelegate, UITableViewDelegate, MMImagePickerManagerDelegate, MMChatBackgroundSettingViewControllerDelegate>

@property (retain, nonatomic) NSString *m_username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)popToMessageSessionView;
- (void)alertButtonConfirm;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onFinishedSelectImage:(id)a0 fromSource:(long long)a1;
- (void)showImagePickerWithAlbum;
- (void)showImagePickerWithTakePhoto;
- (void)showImagePicker:(long long)a0;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)goDefaultChatBackgroundPickViewController;
- (void)applyBackgroundImgToAllScene;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
