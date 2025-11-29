@class NSString, UIViewController;
@protocol AWEFeedHotSpotPanelProtocol, AWESpecialCardMonitorProtocol;

@interface AWEFeedHotSpotInteractionViewController : AWEPlayInteractionViewController <CAAnimationDelegate, AWEFeedHotSpotPanelDelegate, AWEFeedHotSpotInteractionViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedHotSpotPanelProtocol> *panelController;
@property (nonatomic) BOOL scheduleAnimation;
@property (nonatomic) BOOL inInteractionHide;
@property (nonatomic) BOOL hasCallVideoPlay;
@property (retain, nonatomic) id<AWESpecialCardMonitorProtocol> specialCardMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)showPanel:(BOOL)a0;
- (void)hidePanel:(BOOL)a0;
- (void)setPureMode:(BOOL)a0 animateDuration:(double)a1;
- (void)updateAllSubViews;
- (void)weakInteractionView:(BOOL)a0;
- (id)iconNameWithType:(unsigned long long)a0;
- (id)positionAnimationFromValue:(id)a0 toValue:(id)a1;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)videoWillPlay;
- (void)videoWillStop;
- (void)videoWillPause;
- (void)videoWillReset;
- (void)videoWillLoopPlay;
- (void)onlySendPlayEvent;
- (void)panelLoadResult:(BOOL)a0;
- (void)detailViewWillDisappear;
- (void)updateProgressSliderWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)removeTokenFromSlardarIfNeeded;
- (void)userInteractionWithType:(long long)a0;
- (void)userInteractionNotification:(id)a0;
- (void)popUpPanelIfNeeded:(BOOL)a0;
- (void)onFeedCardEventNotification:(id)a0;
- (void)onPanelLongPress;
- (void)changeElementViewShow:(BOOL)a0;
- (void)addTokenToSlardarIfNeededWithModel:(id)a0;
- (void)addSpecialCardTemplateChildVC:(id)a0;
- (void)configPanelWithModel:(id)a0;
- (double)animatinDuration;
- (void)changePanel:(BOOL)a0 animated:(BOOL)a1 complete:(id /* block */)a2;
- (BOOL)isPolarisSchema:(id)a0;
- (void)changeInteractionLeftElement:(BOOL)a0;
- (void)changeInteractionRightElement:(BOOL)a0;
- (void)changeInteractionBottomElement:(BOOL)a0;
- (id)moveToBottomAnimation:(id)a0 show:(BOOL)a1;
- (void)addDislikeModelIfNeeded:(id)a0;
- (void)hideInteractionElements;
- (void)showInteractionElements;
- (void)showToast:(id)a0 imageType:(long long)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageColor:(id)a3;
- (void)updatePlayProgressWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (void)setPlayProgressWithTime:(double)a0 totalDuration:(double)a1 model:(id)a2;
- (id)setModels;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;
- (void)willDisplay;

@end
