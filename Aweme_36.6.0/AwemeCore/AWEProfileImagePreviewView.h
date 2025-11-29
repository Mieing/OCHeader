@class AWEAnimatedButton, AWEUILoadingView, AWEProfileCoverPreviewActionSheetManager, AWEBDXWebViewController, UINavigationController, NSDictionary, UIButton, UIView, AWEDonwloadAnimationButton, NSString, UIScrollView, AWEGradientView, NSNumber, UIImageView;

@interface AWEProfileImagePreviewView : UIView <UIScrollViewDelegate>

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSNumber *decorationID;
@property (nonatomic) BOOL isCurrentLoginUser;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) AWEAnimatedButton *changeButton;
@property (retain, nonatomic) AWEDonwloadAnimationButton *downloadButton;
@property (retain, nonatomic) UIView *downloadBackgroundView;
@property (retain, nonatomic) AWEUILoadingView *indicator;
@property (retain, nonatomic) AWEBDXWebViewController *webViewController;
@property (weak, nonatomic) UINavigationController *previewNavController;
@property (retain, nonatomic) UIScrollView *zoomScrollView;
@property (retain, nonatomic) AWEProfileCoverPreviewActionSheetManager *actionSheetManager;
@property (retain, nonatomic) UIView *panChangeAlphaView;
@property (nonatomic) struct CGPoint { double x; double y; } panChangedPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } showFromFrame;
@property (retain, nonatomic) AWEGradientView *topGradientView;
@property (retain, nonatomic) AWEGradientView *bottomGradientView;
@property (copy, nonatomic) id /* block */ changeButtonClickBlock;
@property (copy, nonatomic) NSString *enterFromPage;
@property (retain, nonatomic) NSDictionary *extraTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (void)removeImagePreviewView;

- (id)aAWEPadBizUIAdapter;
- (void)p_closeButtonTapped;
- (void)stampRecognized:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 image:(id)a1 imageURLArray:(id)a2 userID:(id)a3 type:(long long)a4;
- (void)avatarPreviewClicked;
- (BOOL)isPreviewingAvatar;
- (void)changeButtonPressed:(id)a0;
- (void)selectCoverFromAlbum;
- (void)configureAvatarPendantButtonWithUserModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
- (void)p_panRecognizer:(id)a0;
- (id)changeButtonTitle;
- (void)addStampCover;
- (void)avatarPreviewClicked:(id /* block */)a0;
- (void)trackWhenDownloadAvatarAndCoverClicked;
- (void)p_panEndWith:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)p_panChangeAlpha:(double)a0;
- (void)showFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onVC:(id)a1;
- (id)defaultLightCoverMaskColorStr;
- (id)defaultDarkCoverMaskColorStr;
- (void)downloadButtonPressed;
- (double)lightnessInColor:(id)a0;
- (void)setBacgroundColorWith:(id)a0;
- (void)configureAvatarPendantButtonWithUserModel:(id)a0 enterFrom:(id)a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (void)show;
- (void)setupUI;
- (void)setupAccessibility;
- (void)image:(id)a0 didFinishSavingWithError:(id)a1 contextInfo:(void *)a2;

@end
