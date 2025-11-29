@class UIView, NSString, AWEButton, UIImageView, UIButton, NSDictionary, MASConstraint, UILabel;

@interface AWEAgreeStoreVideoViewedView : UIView <UIGestureRecognizerDelegate, AWEAgreeStoreVideoViewedViewProtocol>

@property (retain, nonatomic) UIView *panelBackground;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEButton *agreeButton;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *subTitleText;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (nonatomic) double baseViewBottomOffset;
@property (retain, nonatomic) MASConstraint *baseViewBottomConstraint;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double agreeStorePanelHeight;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL shouldAlwaysUseWhiteBackground;
@property (copy, nonatomic) id /* block */ agreeBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isBGColorWhite;
@property (retain, nonatomic) NSDictionary *businessTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableStoreUserViewedStatusWithAweme:(id)a0;

- (void)showOnView:(id)a0;
- (id)initWithTitleText:(id)a0 subTitleText:(id)a1;
- (id)initWithShouldAlwaysUseWithTitleText:(id)a0 subTitleText:(id)a1 whiteBackground:(BOOL)a2;
- (id)viewerTitle;
- (void)p_setupViewerSubtitle;
- (void)tapBackgroundView:(id)a0;
- (void)p_trackEventWithType:(id)a0;
- (void)p_trackViewlistPerissionCardWithType:(id)a0;
- (void)p_setupTapGestureRecognizerAndAnimation;
- (void)p_setupUIForPanelView;
- (void)agreeButtonTapped:(id)a0;
- (id)viewerSubtitle;
- (void)showInPanelView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)closeButtonTapped:(id)a0;
- (void)didDismiss:(BOOL)a0;
- (void)handleGestureRecognizer:(id)a0;

@end
