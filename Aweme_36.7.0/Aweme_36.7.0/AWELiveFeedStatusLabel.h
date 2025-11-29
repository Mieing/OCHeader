@class NSData, AWELiveWebPDecoder, NSString, UIView, AWELiveWebPPlayer, AWELiveFeedStatusViewModel, UILabel, UIColor;

@interface AWELiveFeedStatusLabel : UIView <CAAnimationDelegate>

@property (retain, nonatomic) NSData *defaultData;
@property (retain, nonatomic) UILabel *liveStatusTipLabel;
@property (retain, nonatomic) UILabel *liveStatusNextTipLabel;
@property (retain, nonatomic) AWELiveWebPPlayer *liveAnimationView;
@property (retain, nonatomic) AWELiveWebPDecoder *defaultWebPDecoder;
@property (retain, nonatomic) UIView *cancelContainerView;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (retain, nonatomic) UIView *progressView;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) NSString *originText;
@property (nonatomic) struct CGSize { double width; double height; } liveStatusTipLabelSize;
@property (nonatomic) BOOL isEnterFromXtab;
@property (nonatomic) struct CGPoint { double x; double y; } originPosition;
@property (nonatomic) double originBorderWidth;
@property (retain, nonatomic) UIColor *originBorderColor;
@property (retain, nonatomic) AWELiveFeedStatusViewModel *viewModel;
@property (nonatomic) BOOL isShowingAutoEnterAnimation;
@property (nonatomic) BOOL ignoreCallingStartAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (double)labelHeight;
- (BOOL)hitUnusedViewOpt;
- (void)p_updateUIInformation:(BOOL)a0;
- (void)p_startScrollAnimation;
- (void)setupOldAutoEnterUI;
- (void)p_cancelAutoEnter;
- (void)hideLiveStatusIcon;
- (void)showDefaultStatusIcon;
- (void)resetAllViewsAnimations;
- (void)resetScrollTitleStateAnimationsStart;
- (void)resetScrollTitleStateAnimationsCompletion;
- (void)updateToWeakTipEntranceState:(BOOL)a0;
- (void)updateToWeakTipEntranceStateNotIcon:(BOOL)a0;
- (void)updateToIconAndFixedTitleState;
- (void)updateToIconAndScrollTitleState;
- (void)updateToNormalLiveState;
- (void)updateToLiveEndState;
- (void)updateToPerformanceDowngradeState;
- (void)updateToAutoEnter;
- (void)startAutoEnterAnimation:(id /* block */)a0 cancel:(id /* block */)a1 roomID:(id)a2 duration:(long long)a3;
- (void).cxx_destruct;
- (id)init;
- (double)labelFontSize;
- (void)setupUI;

@end
