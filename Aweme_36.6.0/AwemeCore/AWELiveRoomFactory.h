@class NSString, HTSLiveFeedDataApi, IESLiveEnterAudienceRoomStreamPreloader;
@protocol HTSLiveDetailRouter, HTSLiveRoomCollectionDataObserver, IESLiveSettings, IESLiveMonitor;

@interface AWELiveRoomFactory : NSObject <HTSLiveRoomCollectionDelegate, AWELiveRoomFactoryProtocol>

@property (retain, nonatomic) id<HTSLiveDetailRouter> detailRouter;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL isEnteringLive;
@property (retain, nonatomic) HTSLiveFeedDataApi *feedApi;
@property (retain, nonatomic) IESLiveEnterAudienceRoomStreamPreloader *enterRoomStreamPreloader;
@property (retain, nonatomic) id<IESLiveSettings> liveSettings;
@property (weak, nonatomic) id<HTSLiveRoomCollectionDataObserver> dataObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)enterLiveWithUserModels:(id)a0 defaultUserModelIndex:(long long)a1 delegate:(id)a2 roomLog:(id)a3 completion:(id /* block */)a4;
- (id)enterLiveRoom:(id)a0 roomLog:(id)a1;
- (void)enterLiveWithItems:(id)a0 defaultItemIndex:(long long)a1 delegate:(id)a2 roomLog:(id)a3 completion:(id /* block */)a4;
- (void)directEnterLiveFrom:(id)a0 roomLog:(id)a1 completion:(id /* block */)a2;
- (void)preloadPlayerStreamWithFeedItem:(id)a0;
- (void)cancelPreloadPlayerStream;
- (id)currentPreloadStreamRoomID;
- (void)pauseCurrentLive;
- (void)resumeCurrentLive;
- (void)enterLiveOwners:(id)a0 defaultOwner:(id)a1 delegate:(id)a2 roomLog:(id)a3 enterFrom:(id)a4 completion:(id /* block */)a5;
- (BOOL)transferToLiveEpisode:(id)a0;
- (void)enterLiveWithFeedItems:(id)a0 defaultItem:(id)a1 delegate:(id)a2 roomLog:(id)a3 completion:(id /* block */)a4;
- (void)fetchTopviewRoomByAnchorId:(id)a0 secUid:(id)a1 completion:(id /* block */)a2;
- (void)p_updateOriginRoomData:(id)a0 roomLog:(id)a1;
- (void)enterLiveWithRoomDatas:(id)a0 defaultRoomData:(id)a1 delegate:(id)a2 roomLog:(id)a3 completion:(id /* block */)a4;
- (void)_enterLiveCoreWithRoomAisle:(id)a0 defaultRoom:(id)a1 RoomDatas:(id)a2 defaultRoomData:(id)a3 delegate:(id)a4 roomLog:(id)a5 completion:(id /* block */)a6;
- (void)traceEnterLinkWithKey:(id)a0 extra:(id)a1;
- (void)p_checkHTTPDNSEnableOrNot;
- (BOOL)p_isNeedChildModeMonitorWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void)childModeMonitor;
- (void)addBusinessParamsWithRoomAisle:(id)a0 businessParams:(id)a1;
- (void)p_updateADParamsOFRoomAisle:(id)a0 roomLog:(id)a1;
- (void)p_updateBusinessOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (void)p_generateTrackParamsOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (void)p_generateEnterRoomFirstShowParamsOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (BOOL)p_isLiveWithParams:(id)a0;
- (BOOL)p_isVSRoomWithRoom:(id)a0;
- (BOOL)p_enableDrawVSWithParams:(id)a0;
- (void)p_notiHostTargetWhenRoomFinished:(id)a0;
- (id)cityName:(id)a0;
- (long long)ecomLivecouponMateIdWithDefaultRoom:(id)a0;
- (id)p_generateMutableContextParamsWithRoomLog:(id)a0 defaultRoom:(id)a1;
- (id)p_generateFirstShowParamsWithRoomLog:(id)a0 defaultRoom:(id)a1;
- (id)p_generateClickPramasWithRoomLog:(id)a0 defaultRoom:(id)a1;
- (void)p_generateVSParamsOFRoomAisle:(id)a0 roomLog:(id)a1 defaultRoom:(id)a2;
- (BOOL)p_isVSLiveRoomWithRoom:(id)a0;
- (BOOL)p_isVSFirstPlayRoomWithRoom:(id)a0;
- (id)p_topViewController;
- (void)trackFeedLoadDurationWithStartTime:(double)a0 room:(id)a1;
- (void)changeCurrentLiveState:(BOOL)a0;
- (void)enterLiveForFollow:(id)a0 roomLog:(id)a1 enterFrom:(id)a2 completion:(id /* block */)a3;
- (void)enterRoomForUserProfileVSFormatTabWithEpisode:(id)a0 innerFeedEpisodes:(id)a1 VSParameters:(id)a2;
- (void).cxx_destruct;

@end
