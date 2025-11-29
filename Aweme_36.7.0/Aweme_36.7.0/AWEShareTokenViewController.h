@class UIImageView, UILabel, NSDictionary, UIButton, UIView, AWEShareTokenConfiguration, NSString, AWEUserRecommendLabel, UIStackView, DUXLoadingCircleView, AFDButton, NSArray, UIImage;

@interface AWEShareTokenViewController : UIViewController <AWERouterViewControllerProtocol, AWEShareTokenViewControllerProtocol>

@property (retain, nonatomic) AWEShareTokenConfiguration *configuration;
@property (nonatomic) BOOL showsWechat;
@property (nonatomic) BOOL showsQQ;
@property (nonatomic) long long clickedPlatform;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEUserRecommendLabel *promptLabel;
@property (retain, nonatomic) AFDButton *wechatButton;
@property (retain, nonatomic) AFDButton *qqButton;
@property (retain, nonatomic) UIView *qrCodeBackgroundView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UIImage *qrCodeImage;
@property (retain, nonatomic) AFDButton *qrCodeRetryButton;
@property (retain, nonatomic) DUXLoadingCircleView *qrCodeLoadingView;
@property (nonatomic) long long qrCodeStatus;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *textTokenBackgroundView;
@property (retain, nonatomic) UIStackView *textTokenStackView;
@property (retain, nonatomic) NSArray *textTokenLabels;
@property (retain, nonatomic) AFDButton *textTokenRetryButton;
@property (retain, nonatomic) NSString *textToken;
@property (retain, nonatomic) DUXLoadingCircleView *textTokenLoadingView;
@property (nonatomic) long long textTokenStatus;
@property (copy, nonatomic) NSDictionary *extraLogDict;
@property (copy, nonatomic) id /* block */ tokenFetchedBlock;
@property (copy, nonatomic) id /* block */ clickShareTypeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)p_fetchTokenUsingNewAPIWithCompletion:(id /* block */)a0;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)imageSavedToPhotosAlbum:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;
- (void)p_close:(id)a0;
- (void)p_trackShareToken;
- (void)p_setupTextTokenUI;
- (void)p_fetchTextToken;
- (void)p_setupImageTokenUI;
- (void)p_fetchQRCode;
- (void)p_setupQRCode;
- (long long)p_photoLibraryAuthorizationStatus;
- (BOOL)p_needSaveQRCodeImageToken;
- (void)p_saveQRCodeImageToken;
- (void)p_trackQRCodeGenerate;
- (void)p_clickPlatform:(long long)a0;
- (void)p_trackAddProfileFriendsWithPlatform:(id)a0;
- (id)p_nameForPlatform:(long long)a0;
- (void)p_openSharePlatform:(long long)a0;
- (void)p_trackQRCodeSave;
- (void)p_onPhotoLibraryAccessRejected;
- (void)p_clickWechat;
- (void)p_configShareButton:(id)a0;
- (void)p_clickQQ;
- (void)p_retryFetch;
- (void)p_updateShareButtons;
- (void)p_setToken:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)show;
- (void)p_applicationDidBecomeActive:(id)a0;

@end
