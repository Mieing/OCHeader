@class NSString, AWELivePreviewExitGuide, AWELivePreStreamLiveCommonGuideView, IESLiveGCDTimer;
@protocol HTSKVStore;

@interface AWELivePreStreamOpenLiveGuideElement : AWELiveBaseElement <AWELivePreStreamEnterRoomDataProvider, AWELivePreStreamAlertPriorityProtocol, AWELiveRoomMessage>

@property (retain, nonatomic) AWELivePreStreamLiveCommonGuideView *guideView;
@property (retain, nonatomic) AWELivePreviewExitGuide *openLiveGuideData;
@property (retain, nonatomic) id<HTSKVStore> kvStore;
@property (copy, nonatomic) NSString *innerFeedLastStayRoomID;
@property (copy, nonatomic) NSString *innerFeedMaxStayRoomID;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) long long duration;
@property (nonatomic) long long innerFeedMaxStayTime;
@property (nonatomic) BOOL useLessFreq;
@property (nonatomic) long long showCountOneDay;
@property (nonatomic) long long notClickCount;
@property (nonatomic) long long dontShowDays;
@property (nonatomic) long long continueDontShowDays;
@property (nonatomic) long long alwaysDontShowDays;
@property (nonatomic) BOOL hasScrollInnerFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)showElement;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)anchorStartLive;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)removeLiveAlertElementWithCompletion:(id /* block */)a0;
- (void)showLiveAlertElementWithCompletion:(id /* block */)a0;
- (unsigned long long)elementConfig;
- (void)viewController_viewWillDisAppear;
- (void)viewController_willBeginDragging:(id)a0;
- (void)audienceViewController_WillEnterLiveRoom:(id)a0 anchorID:(id)a1;
- (void)audienceViewController_DidLeaveLiveRoom:(id)a0 anchorID:(id)a1;
- (BOOL)canOpenSchemaURL;
- (void)hideElement:(id)a0;
- (BOOL)enableShowOpenLiveGuide;
- (void)p_showAlertElement;
- (BOOL)canShowOpenLiveGuide:(BOOL)a0;
- (void)startTimeWithBlock:(id /* block */)a0;
- (void)trackOpenLiveDisableShowReason:(id)a0 currentFrequencyDay:(long long)a1 nextFrequencyDays:(long long)a2;
- (BOOL)enableFrequencyControl:(BOOL)a0;
- (BOOL)elementSupportHomepage;
- (BOOL)excludeByAnchorGuidePoint;
- (void)jumpToOpenLivePage;
- (void)p_cleanFrequencyControl;
- (void)excuteSchemaURL;
- (void)trackOpenLiveGuideWithEvent:(id)a0;
- (void)createChannelGuideView;
- (void)channelGuideDidShow;
- (id)elementView;
- (void).cxx_destruct;
- (void)resetTimer;
- (void)setData:(id)a0;
- (unsigned long long)priority;
- (void)reset;
- (void)dealloc;

@end
