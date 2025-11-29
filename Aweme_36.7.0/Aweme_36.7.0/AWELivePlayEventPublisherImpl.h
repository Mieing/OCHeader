@class AWELiveRoomMessageContext, NSString;

@interface AWELivePlayEventPublisherImpl : NSObject <IESLivePlayEventPublishService>

@property (retain, nonatomic) AWELiveRoomMessageContext *roomEndContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dislikeWithRoom:(id)a0;
- (void)liveWillAppear;
- (void)liveDidAppear;
- (void)liveWillDisappear;
- (void)liveDidDisappear;
- (void)onPreViewUserFeedbackCardShowInLive:(id)a0;
- (void)insertFeedbackDataInPreview:(id)a0;
- (id)snapshotLinkmicView;
- (id)snapshotPKView;
- (id)snapshotMultiLinkerView;
- (void)p_trackLeaveLiveRoomWithtrackInfo:(id)a0;
- (id)findAudioViewFrames:(id)a0;
- (id)findKTVStage:(id)a0;
- (void)findGuestView:(id)a0 addTo:(id)a1 rootView:(id)a2;
- (void)liveWillOpen;
- (void)liveWillOpenWithPreferOptions:(id)a0;
- (void)liveDidCloseWithPreferOptions:(id)a0;
- (void)liveDidCloseByCloseButton;
- (void)liveWillEnter;
- (void)liveDidLeave;
- (void)liveSmoothEnterRoomEnd;
- (void)liveDidKickdOutForRoom:(id)a0 anchorID:(id)a1;
- (void)liveDidRegionForbiddenForRoom:(id)a0 anchorID:(id)a1;
- (void)audienceRtcChannelStateChange:(BOOL)a0;
- (void)liveWillLeaveWithViceView:(id)a0;
- (void)checkLiveRoomBackOptimizeEnable:(id /* block */)a0;
- (void)liveDidCloseWithPreReusePlayerWithPreferOptions:(id)a0;
- (void).cxx_destruct;

@end
