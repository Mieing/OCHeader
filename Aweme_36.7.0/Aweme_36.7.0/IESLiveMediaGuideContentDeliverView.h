@class UIView, NSString, IESLiveCreateCoverEditViewController, IESLiveGuideModel, UIImageView, UIButton, HTSLiveCoverImageApi, UILabel;
@protocol IESLivePhotoLibraryService;

@interface IESLiveMediaGuideContentDeliverView : UIView <IESLiveAnchorCameraPermissionHandler, UINavigationControllerDelegate, UIImagePickerControllerDelegate, IESLiveGuidePrivacyPermissionProtocol>

@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) UIButton *checkBoxBtn;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *addCoverLbl;
@property (nonatomic) BOOL isPickerShowing;
@property (retain, nonatomic) HTSLiveCoverImageApi *coverImageApi;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (retain, nonatomic) IESLiveCreateCoverEditViewController *createCoverEditController;
@property (retain, nonatomic) NSString *coverURI;
@property (retain, nonatomic) UIView *xtLiveBackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkBoxClicked:(id)a0;
- (BOOL)canHandleVideoCapture;
- (id)checkBoxView;
- (void)selectImage;
- (void)updateCheckStatus:(BOOL)a0;
- (void)showCameraEntrance;
- (id)initWithGuideModel:(id)a0 attachingDIContext:(id)a1;
- (BOOL)currentXTSelectStatus;
- (BOOL)hasLocalRecord;
- (id)coverRootViewController;
- (id)needIgnoreProcessGeneralVideoCaptureByResumeScene:(unsigned long long)a0;
- (void)helpBtnClicked:(id)a0;
- (void)showPhotoEntrance;
- (void)showImagePickerController;
- (void)editImage:(id)a0 pickerController:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)uploadImage:(id)a0;
- (void)setupUI;

@end
