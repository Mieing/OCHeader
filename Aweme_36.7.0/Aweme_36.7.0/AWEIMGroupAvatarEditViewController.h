@class AWEIMMessageConversation, IESIMAnimatedButton, UIImageView, UIImage, AWEIMDownloadAnimationButton, UIView;
@protocol IESIMTextLoadingViewProtocol;

@interface AWEIMGroupAvatarEditViewController : UIViewController

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) UIImageView *groupAvatarImageView;
@property (retain, nonatomic) UIImage *beforeImage;
@property (retain, nonatomic) IESIMAnimatedButton *changeButton;
@property (retain, nonatomic) AWEIMDownloadAnimationButton *downloadButton;
@property (retain, nonatomic) UIView *downloadBackgroundView;
@property (retain, nonatomic) UIView<IESIMTextLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) id /* block */ imagePickedBlock;
@property (copy, nonatomic) id /* block */ sourceBlock;
@property (copy, nonatomic) id /* block */ cropVCBlock;
@property (nonatomic) unsigned long long avatarSource;
@property (nonatomic) BOOL shouldNotTransferToSetting;
@property (nonatomic) BOOL useNewCropVC;

- (void)__setupUI;
- (void)__backBtnClicked;
- (void)downloadButtonPressed:(id)a0;
- (void)__changeButtonClicked;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (id)initWithConversation:(id)a0;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
