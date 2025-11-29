@class UIView, ACCAIGCLoraPersonInfo, UIImage, ACCAIGCLoraHelper, UIImageView, UIButton, UILabel, ACCAnimatedButton;
@protocol ACCAIGCFullPreviewLoraCoverControllerDelegate;

@interface ACCAIGCFullPreviewLoraCoverController : UIViewController

@property (retain, nonatomic) ACCAIGCLoraPersonInfo *loraInfo;
@property (retain, nonatomic) UIView *navigationBar;
@property (retain, nonatomic) ACCAnimatedButton *backUpButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *downloadContentView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *showDownloadImageView;
@property (retain, nonatomic) ACCAIGCLoraHelper *loraHelper;
@property (retain, nonatomic) UIImageView *downloadImageView;
@property (retain, nonatomic) UIImage *downloadImage;
@property (retain, nonatomic) UIImageView *deletedImageView;
@property (retain, nonatomic) ACCAnimatedButton *coverButton;
@property (nonatomic) BOOL showDownloadImageViewTap;
@property (nonatomic) BOOL isDefault;
@property (retain, nonatomic) UIView *loraTipsView;
@property (retain, nonatomic) UILabel *loraMainLabel;
@property (retain, nonatomic) UILabel *createTimeLabel;
@property (retain, nonatomic) UIButton *createPortraitButton;
@property (retain, nonatomic) UIView *loraBuildingView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *loraBuildingLabel;
@property (nonatomic) long long darkMode;
@property (nonatomic) BOOL showCreatePortrait;
@property (nonatomic) BOOL isFromInspiration;
@property (weak, nonatomic) id<ACCAIGCFullPreviewLoraCoverControllerDelegate> delegate;

- (void)onThemeChanged;
- (void)bindObserver;
- (void)rotateAnimation;
- (void)showToastWithSuccess:(BOOL)a0;
- (void)updateUILayout;
- (BOOL)shouldUseAICreationUIStyle;
- (void)setupUGCFusionUI;
- (id)saveImageToTemporaryDirectoryWithImage:(id)a0;
- (void)addWatermarkToImageAtPath:(id)a0 meta:(id)a1;
- (void)saveImageToPhotosAlbum:(id)a0;
- (void)p_checkPhotoLibraryPermissionWithFinish:(id /* block */)a0;
- (void)processImageWithMetadata:(id)a0 meta:(id)a1;
- (void)saveImageDataToPhotosAlbum:(id)a0;
- (void)sendClickAigcRoleManagerPageWith:(id)a0;
- (BOOL)enableCreatePortraitOpt;
- (void)onClickCreateUGCLora;
- (void)tapBackUpButton;
- (void)onClickDeletedAction;
- (void)clickSetLoraInfo;
- (void)tapDownloadButton;
- (void)onClickCreatePortraitAction;
- (id)initWithLoraInfo:(id)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupNavigationBar;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
