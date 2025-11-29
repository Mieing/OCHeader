@class NSString, KidsWatchActionCardView, SightIconView, UIImageView, RichTextView, MMUILabel;
@protocol KidsWatchMainViewControllerDelegate;

@interface KidsWatchMainViewController : KidsWatchBaseViewController <ILinkEventExt>

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) KidsWatchActionCardView *loginCardView;
@property (retain, nonatomic) RichTextView *registerTextView;
@property (retain, nonatomic) SightIconView *loadingView;
@property (retain, nonatomic) UIImageView *shapeView;
@property (retain, nonatomic) UIImageView *bottomBackgroundView;
@property (weak, nonatomic) id<KidsWatchMainViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)showMainViewNeedShowRegister:(BOOL)a0;
- (void)onTapLoginButton;
- (void)onTapRegisterButton;
- (void)onTapHelpBarButton;
- (void)onTapCloseBarButtonItem;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
