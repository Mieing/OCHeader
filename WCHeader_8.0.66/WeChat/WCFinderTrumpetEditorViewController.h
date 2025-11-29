@class UIView, NSString, UITextField, FinderLiveAliasInfo, UILabel, MMWebImageView, UIButton;

@interface WCFinderTrumpetEditorViewController : MMUIViewController <MMImagePickerManagerDelegate>

@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) UIButton *certainButton;
@property (weak, nonatomic) UITextField *nickNameTextField;
@property (weak, nonatomic) MMWebImageView *headerImageView;
@property (copy, nonatomic) NSString *headerImageURL;
@property (copy, nonatomic) NSString *localUploadedHeadImageURL;
@property (weak, nonatomic) UIView *lastLineView;
@property (retain, nonatomic) FinderLiveAliasInfo *aliasInfo;
@property (nonatomic) BOOL hideTakePhotoAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)listenKeyBoard;
- (void)setUpUI;
- (id)createLineView;
- (void)clickHeader;
- (void)clickNickNameAction;
- (void)textFieldChange:(id)a0;
- (void)textFieldDone:(id)a0;
- (void)clickDoneAction;
- (void)onCamera;
- (void)onPhotoLibrary;
- (void)showImagePicker:(long long)a0;
- (void)onSightPictureTaken:(id)a0 imageData:(id)a1 withFrontCamera:(BOOL)a2 editImageAttr:(id)a3;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)handleImage:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
