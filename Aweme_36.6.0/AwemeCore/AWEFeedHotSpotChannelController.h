@class NSString, NSTimer, AWEXTabHotSpotViewController, NSDate;
@protocol AWEHPChannelControllerConfigProtocol;

@interface AWEFeedHotSpotChannelController : NSObject <AWEMessageReachChannelCommunicator, AWEHPChannelControllerProtocol>

@property (retain, nonatomic) AWEXTabHotSpotViewController *contentVC;
@property (nonatomic) BOOL isTiming;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSDate *pauseStart;
@property (retain, nonatomic) NSDate *previousFireDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

- (void)channelEnterWithModel:(id)a0;
- (void)channelLeaveWithModel:(id)a0;
- (void)channelTopTabContainerDidAppear;
- (id)topBarAbility;
- (BOOL)mr_isSkylightOpen;
- (void)channelTopTabItemTapGestureRecognizerShouldReceiveTouchWithParams:(id)a0;
- (void)channelTopTabItemTapGestureRecognizerStateChangedWithParams:(id)a0;
- (void)topTabScrollDidReachStableEnd;
- (void)channelDidLoadWithType:(unsigned long long)a0;
- (void)channelViewDidAppear:(id)a0;
- (void)channelViewDidDisappear:(id)a0;
- (void)channelLandingTabWithModel:(id)a0;
- (void)channelEndLandingTabWithModel:(id)a0;
- (void)channelTrackRefreshWithModel:(id)a0;
- (BOOL)channelAllowCommonPinTopStrategy;
- (BOOL)channelReleaseContentViewController:(id)a0;
- (id)channelGetCommunicationObject:(id)a0 byProtocol:(id)a1;
- (void)channel:(id)a0 startPreload:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)getContentViewController;
- (void)tryTriggerBubble;
- (void)handleGuideViewHasShow:(id)a0;
- (void)p_jumpUsingSchemaInModel:(id)a0;
- (void)p_beginPinTop;
- (void)p_trackerJumpWithSchema:(id)a0;
- (BOOL)p_enableChangeHotSpotChannelTabOrder;
- (void)p_resumeTimer;
- (void)p_pauseTimer;
- (void)p_stopTimer;
- (BOOL)p_meetsXTabCountOfEnter;
- (void)p_startTimer;
- (long long)p_triggerTimeOfHotSpotChannelPinTop;
- (long long)p_countOfEnterHotSpotChannel;
- (void).cxx_destruct;
- (void)addObserver;
- (void)appDidEnterBackground:(id)a0;
- (id)initWithConfig:(id)a0;
- (void)appWillEnterForeground:(id)a0;

@end
