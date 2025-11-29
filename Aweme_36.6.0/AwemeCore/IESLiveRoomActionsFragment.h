@class AWELiveRoomMessageContext, NSString;
@protocol IESLiveCompoundSubscription;

@interface IESLiveRoomActionsFragment : IESLiveRoomComponent <HTSLiveAudienceActions, HTSLiveAnchorActions, IESLiveAnchorRoomStatusChangeEvents>

@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (nonatomic) BOOL liveDisableSetting;
@property (retain, nonatomic) AWELiveRoomMessageContext *roomEndContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentMount;
- (void)componentUnmount;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)willStopAnchorLive;
- (void)stopAnchorLive;
- (void)onReceiveShareFilterUser;
- (id)snapshotLinkmicView;
- (id)findAudioViewFrames:(id)a0;
- (id)findKTVStage:(id)a0;
- (void)findGuestView:(id)a0 addTo:(id)a1 rootView:(id)a2;
- (void)_setupActions;
- (void)_addRecallMessageObserver;
- (void)_removeRecallMessageObserver;
- (void)recorderControllerDidAppear;
- (void)_handleRecallMessage:(id)a0;
- (void)_fakeBannerRefreshMesasge:(id)a0;
- (void)callEndLiveMessage;
- (void).cxx_destruct;

@end
