@class NSTimer, BDPLivePlayerContainer, NSString, UIView, BDPUniqueID, NSMutableDictionary, BDPAudioInterruptionConfig, BDPFollowUserCard, NSMutableArray;

@interface BDPPluginLivePlayerComponent : BDPBridgeInstancePlugin <BDPLivePlayerContainerProtocol, BDPAppRouteChangeMessage, BDPElementFullscreenMessage, BDPLivePlayerAuditDelegate, BDPUserScreenRecordDelegate, BDPAudioInterruptionDelegate, BDPContainerLifeCycleMessage, BDPAppRouteChangeMessage> {
    NSMutableDictionary *_playerList;
    NSMutableArray *_forcePauseList;
}

@property (nonatomic) long long pageID;
@property (nonatomic) long long pageIDForLivePreview;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } playerDictRWLock;
@property (retain, nonatomic) BDPAudioInterruptionConfig *audioInterruptionConfig;
@property (retain, nonatomic) BDPFollowUserCard *followCard;
@property (retain, nonatomic) BDPLivePlayerContainer *livePlayerContainer;
@property (nonatomic) BOOL usingLivePreview;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (copy, nonatomic) id /* block */ closeLivePreviewCompletion;
@property (retain, nonatomic) UIView *livePreviewGeneral;
@property (nonatomic) BOOL isLivePreviewFollowCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillEnterForground;
- (void)applicationExitWithUniqueID:(id)a0;
- (void)applicationEnterBackGroundWithUniqueID:(id)a0;
- (void)applicationEnterForeGroundWithUniqueID:(id)a0;
- (void)enterFullscreenWithPageID:(long long)a0 orientation:(long long)a1 element:(id)a2 uniqueID:(id)a3;
- (void)exitFullscreenWithPageID:(long long)a0 element:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageWillEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)startDismissTimer;
- (void)enableScreenRecord;
- (void)pauseByInterrupt;
- (void)resumeByInterrupt;
- (id)getInterruptUniqueID;
- (long long)getPageID;
- (void)disableScreenRecord;
- (void)onAuditResultFailWithSrcs:(id)a0;
- (void)bdp_livePlayerStateChange:(long long)a0 livePlayer:(id)a1 extra:(id)a2;
- (id)setErrorInfoWithErrorCode:(long long)a0 errorMsg:(id)a1 errorType:(id)a2;
- (BOOL)pageContainsLivePreviewWithController:(id)a0 setContainer:(BOOL)a1;
- (void)destroyLivePreview;
- (void)removeLivePreviewCardWithFollowCard:(BOOL)a0 completion:(id /* block */)a1;
- (void)livePreviewTrackerWithEvent:(id)a0 withData:(id)a1;
- (void)insertLivePreviewCardWithContainer:(id)a0 playerView:(id)a1 isFollowCard:(BOOL)a2 completion:(id /* block */)a3;
- (void)postRemoveLivePreviewLayerProcessWithAnimationFinish:(BOOL)a0;
- (void)getLivePreviewInfoWithOpenId:(id)a0 aweID:(id)a1 completion:(id /* block */)a2;
- (void)letPreviewPlayIfNeededWithPageID:(long long)a0 uniqueID:(id)a1 needPageID:(BOOL)a2;
- (void)trackLivePlayerEventWithEventName:(id)a0 params:(id)a1;
- (void)insertLivePlayerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateLivePlayerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeLivePlayerWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)setLivePlayerWaterMarkWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateLivePlayerContextWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)showLivePreviewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)destroyLivePreviewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateTimer;
- (void)dealloc;

@end
