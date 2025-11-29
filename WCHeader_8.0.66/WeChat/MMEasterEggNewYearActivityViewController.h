@class UIView, MMEasterEggNewYearActivityInfo, MMEasterEggNewYearActivityMaterialInfo, MMEasterEggNewYearActivityReportObject, UIScreenEdgePanGestureRecognizer, UIImageView, UIButton, NSString, MMEasterEggNewYearActivityCardView, UILabel, UIScrollView;
@protocol MMEasterEggNewYearActivityViewControllerDelegate;

@interface MMEasterEggNewYearActivityViewController : MMUIViewController <MMEasterEggNewYearActivityCardViewDelegate>

@property (retain, nonatomic) MMEasterEggNewYearActivityInfo *activityInfo;
@property (retain, nonatomic) MMEasterEggNewYearActivityReportObject *reportObject;
@property (weak, nonatomic) UIScrollView *contentView;
@property (weak, nonatomic) UIImageView *backgroundLogoView;
@property (weak, nonatomic) UIButton *bottomLinkButton;
@property (weak, nonatomic) UILabel *bottomSubLabel;
@property (weak, nonatomic) UIView *separatorView;
@property (weak, nonatomic) UIButton *disableButton;
@property (weak, nonatomic) UIImageView *bigLuckyBagView;
@property (weak, nonatomic) MMEasterEggNewYearActivityCardView *cardView;
@property (retain, nonatomic) MMEasterEggNewYearActivityMaterialInfo *materialInfo;
@property (nonatomic) BOOL canShowCard;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (weak, nonatomic) id<MMEasterEggNewYearActivityViewControllerDelegate> delegate;
@property (nonatomic) BOOL isFromChatRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithActivityInfo:(id)a0 reportSessionId:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)initView;
- (void)initData;
- (void)initTicking;
- (void)initGesture;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldInteractiveDismiss;
- (long long)preferredStatusBarStyle;
- (BOOL)useBlackStatusbar;
- (void)viewDidTransitionToNewSize;
- (void)continueWithMaterialInfo:(id)a0;
- (void)closeWithError:(id)a0;
- (void)layoutContentView;
- (void)layoutButtonLinkButton;
- (void)enableBottomLink:(id)a0;
- (id)getResultCardViewAnimation;
- (void)handleScreenEdgePanGesture:(id)a0;
- (void)onTapBottomLinkButton;
- (void)onTapDisableButton;
- (void)showCardIfNeeded;
- (void)openMoneyForMaterialId:(unsigned long long)a0;
- (void)getCouponForAppId:(id)a0 stockId:(id)a1;
- (void)jumpToPageWithType:(unsigned long long)a0 info:(id)a1;
- (void)onTapActionButton;
- (void).cxx_destruct;

@end
