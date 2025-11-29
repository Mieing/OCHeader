@class WCDataItem, NSString, PAGView, WCAdPagInfo, UIButton;
@protocol WCAdFireworkCheerAnimationViewDelegate;

@interface WCAdFireworkCheerAnimationView : MMUIWindow <PAGViewListener, CAAnimationDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdPagInfo *pagInfo;
@property (nonatomic) unsigned long long contentItemScene;
@property (nonatomic) double canCloseDelayTime;
@property (nonatomic) double vibrateDelayTime;
@property (retain, nonatomic) PAGView *animationPagView;
@property (retain, nonatomic) UIButton *maskButtonView;
@property (nonatomic) unsigned long long playStartTimestampMs;
@property (nonatomic) BOOL isHideAnimating;
@property (nonatomic) BOOL closedFlag;
@property (weak, nonatomic) id<WCAdFireworkCheerAnimationViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPagInfo:(id)a0 canCloseDelayTime:(double)a1 vibrateDelayTime:(double)a2 dataItem:(id)a3 contentItemScene:(unsigned long long)a4;
- (void)dealloc;
- (void)initRootViewController;
- (void)initView;
- (void)initAnimationPagView;
- (void)initMaskButtonView;
- (void)onClickMaskButton:(id)a0;
- (void)tryToStartHideAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (BOOL)playAnimation;
- (BOOL)isAnimationPlaying;
- (void)closeView;
- (void)fireworkCheerExplode;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void).cxx_destruct;

@end
