@class NSMutableDictionary, IESECLiveKVStorage, IESECLiveUIConfigStore, IESECLiveActionQualityTrackerManager, IESECLiveABSettingUtil, IESECLiveTracker, IESECLiveGoodsJumpHandler, IESECLiveRoomContext, IESECLiveRoomParams, IESECLiveSliceViewPool, IESECLiveResourceUtil, IESECLiveBusinessContext, IESECLiveActionQualityTracker, IESECLiveRelatedInfoProvider, NSString, IESECLiveTimeCenter, IESECLiveEnterRoomUtil;
@protocol IESECActionRecordService;

@interface IESECLiveContext : IESECContext <IESECLiveApiParamDelegate, IESECLiveContextInterface>

@property (retain, nonatomic) IESECLiveRoomParams *coreParams;
@property (retain, nonatomic) IESECLiveBusinessContext *businessContext;
@property (retain, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) id<IESECActionRecordService> actionRecordService;
@property (retain, nonatomic) IESECLiveGoodsJumpHandler *jumpHandler;
@property (retain, nonatomic) IESECLiveTimeCenter *timerCenterWithOneSecInterval;
@property (retain, nonatomic) IESECLiveEnterRoomUtil *enterRoomUtil;
@property (retain, nonatomic) NSMutableDictionary *taskSchedulers;
@property (retain, nonatomic) IESECLiveKVStorage *kvStorage;
@property (retain, nonatomic) IESECLiveUIConfigStore *uiConfigStore;
@property (retain, nonatomic) IESECLiveSliceViewPool *sliceViewPool;
@property (readonly, nonatomic) IESECLiveResourceUtil *resourceUtil;
@property (readonly, nonatomic) IESECLiveABSettingUtil *abUtil;
@property (readonly, nonatomic) IESECLiveRelatedInfoProvider *relatedInfoProvider;
@property (weak, nonatomic) IESECLiveRoomContext *liveRoomContext;
@property (nonatomic) BOOL useV2;
@property (nonatomic) BOOL disabelListRefresh;
@property (retain, nonatomic) IESECLiveActionQualityTrackerManager *actionQualityTrackerManager;
@property (retain, nonatomic) IESECLiveActionQualityTracker *enterRoomQualityTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getRedirectPathData;
- (id)getStoreId;
- (id)getAddressInfo;
- (long long)getRoomInstantType;
- (BOOL)invokeSchedulerWithName:(id)a0 params:(id)a1;
- (void)connectMessageWithLinkID:(id)a0;
- (id)getRedirectPathDict;
- (id)initWithContextParams:(id)a0;
- (void)willShowPanelWithDuration:(double)a0 height:(double)a1 scene:(id)a2 panelHash:(long long)a3;
- (void)willDismissPanelWithDuration:(double)a0 animated:(BOOL)a1 scene:(id)a2 panelHash:(long long)a3;
- (id)trackerConsumer;
- (void)registerConsumerIntoActionRecordService;
- (void)willShowPanelWithDuration:(double)a0 height:(double)a1 scene:(id)a2 panelHash:(long long)a3 onlyCount:(BOOL)a4;
- (void)setupCoreParams:(id)a0;
- (void)setupActionRecordService;
- (void)logEcomLiveParams;
- (void)addScheduler:(id)a0;
- (void).cxx_destruct;
- (id)record;
- (void)dealloc;
- (id)api;

@end
