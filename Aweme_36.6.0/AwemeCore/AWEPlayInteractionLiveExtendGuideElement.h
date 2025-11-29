@class NSString, NSMutableSet, AWEPlayInteractionLiveExtendGuideView;

@interface AWEPlayInteractionLiveExtendGuideElement : AWEPlayInteractionBaseActionButtonElement <AWELiveVideoFeedUpdateMessage, AWELiveRoomMessage, AWEPlayInteractionBottomButtonPriorityProtocol>

@property (class, retain, nonatomic) NSMutableSet *liveExtendShowCount;
@property (class, nonatomic) long long disableShowTime;

@property (retain, nonatomic) AWEPlayInteractionLiveExtendGuideView *liveExtendView;
@property (copy, nonatomic) id /* block */ playedPeriodHandler;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)notClickTimes;
+ (BOOL)checkFrequencyControl;
+ (void)addExtendShowCount:(id)a0;
+ (void)cleanFrequency;
+ (long long)intervalMinutes;
+ (long long)notShowDays;

- (void)viewController_willDisplay;
- (void)viewController_didEndDisplaying;
- (BOOL)isNeedDelayAppear;
- (id)activateInfoWithData:(id)a0;
- (void)audienceQuitAllRoom;
- (void)viewDidDisposed;
- (void)bindEvent;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)subscribedLiveExtendInfo:(id)a0;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)p_show;
- (void)tapLiveExtendView;
- (void)removeEvent;
- (long long)videoPlayTimes;
- (id)p_trackParams:(id)a0;
- (id)liveExpendShowParams:(id)a0;
- (void)animateUnhiddenIfNeeded;
- (void)showExtendGuideElement;
- (void)animateUnhidden;
- (void)animateHidden;
- (BOOL)shouldShowLiveExtendBottomButton;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (void)setupHandler;

@end
