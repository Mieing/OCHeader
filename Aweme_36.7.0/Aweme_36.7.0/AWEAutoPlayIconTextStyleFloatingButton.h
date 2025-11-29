@class UIView, AWEPadAutoPlaySwitchView, AWEPadAutoPlayTipsConfig, NSString, CAShapeLayer, UIViewController, AWEBubble, UILabel;

@interface AWEAutoPlayIconTextStyleFloatingButton : UIView <AWEPadUIAdaptionViewTransitionObserver, AWEFeedAutoPlayFloatingButtonProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAShapeLayer *backgroundLayer;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) AWEPadAutoPlaySwitchView *switchView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEBubble *guideBubble;
@property (retain, nonatomic) AWEPadAutoPlayTipsConfig *tipsConfig;
@property (nonatomic) BOOL guidePopoverDidShow;
@property (nonatomic) long long guideBubbleDidShowCount;
@property (nonatomic) double guideBubbleLastShowTime;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (nonatomic) BOOL newStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } buttonSize;
@property (copy, nonatomic) id /* block */ onButtonClicked;

+ (Class)aAWEPadModuleAdapterClass;

- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)aAWEPadModuleAdapter;
- (void)setupUI:(long long)a0;
- (void)dismissGuidePopoverIfNeeded;
- (void)updateViewWithAutoPlayState:(long long)a0 animated:(BOOL)a1;
- (void)showGuidePopoverIfNeededInContainerView:(id)a0;
- (void)updatePlayTimeTip:(BOOL)a0 withText:(id)a1 autoPlayState:(long long)a2;
- (BOOL)isButtonFold;
- (BOOL)isShowingLongPressBubble;
- (BOOL)rightUIAdapterEnable;
- (void)updateLayoutWithScale:(double)a0;
- (BOOL)shouldShowGuide;
- (void)initGuideShowState;
- (BOOL)isV1Style;
- (void)autoPlayFloatingButtonTapped:(id)a0;
- (void)markGuideDidShowOnce;
- (void)autoFoldIfNeed:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;

@end
