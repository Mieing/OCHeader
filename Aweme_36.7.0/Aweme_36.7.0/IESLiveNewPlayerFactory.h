@class NSDictionary;
@protocol IESLiveEnvironment, IESLivePerfSampler, IESLiveTracker, IESLiveRoomService, IESLiveMonitor;

@interface IESLiveNewPlayerFactory : NSObject

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (nonatomic) BOOL isInLiveRoom;
@property (weak, nonatomic) id<IESLiveTracker> tracker;
@property (weak, nonatomic) id<IESLiveEnvironment> environment;
@property (weak, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (copy, nonatomic) NSDictionary *performanceInfo;
@property (nonatomic) int enablePerformanceInfoDeliver;

- (id)configIESLivePlayerForReuse:(id)a0;
- (void)addSEIListener:(id)a0;
- (id)dequeuePlayerWithStreamModel:(id)a0;
- (void)enqueueIESLivePlayerWithPlayer:(id)a0;
- (void)enqueuePlayerIntoPool:(id)a0 callTrace:(id)a1 resetBlock:(id /* block */)a2;
- (id)trackerConfigWithStreamModel:(id)a0 fromSmallWindow:(BOOL)a1;
- (id)playerWithTrackerConfig:(id)a0;
- (id)dequeuePlayerFromPoolWithStreamModel:(id)a0 callTrace:(id)a1 diContext:(id)a2 preferenceOptions:(id)a3;
- (void)setupPlayer:(id)a0;
- (id)playerWithStreamModel:(id)a0;
- (BOOL)isExistTempHoldPlayer:(id)a0;
- (void)replenishPlayerIntoPoolWithCount:(long long)a0 callTrace:(id)a1;
- (id)trackerConfigWithStreamModel:(id)a0;
- (id)liveAppBizInfo;
- (id)collectPerformanceInfo;
- (void)bindAttachmentDIContext:(id)a0 targetPlayer:(id)a1;
- (void)provideBasicPropertyForTrackerConfig:(id)a0;
- (void)setupPlayerWithoutDI:(id)a0;
- (void)traceEvent:(id)a0 param:(id)a1;
- (id)updateTVLCommonParams;
- (void)configBlockOnPlayer:(id)a0;
- (void)p_trackEventForGetPlayer:(id)a0 trackerConfig:(id)a1;
- (id)baseTrackerConfig;
- (id)trackerProjectKeyWithRoomScene:(long long)a0;
- (BOOL)isVideoStallEvent:(id)a0;
- (id)trackContextFromRoomService:(id)a0;
- (id)dequeuePlayerWithStreamModel:(id)a0 fromSmallWindow:(BOOL)a1;
- (id)dequeuePlayerWithStreamModel:(id)a0 fromSmallWindow:(BOOL)a1 preferenceOptions:(id)a2 callTrace:(id)a3;
- (void)createPlayerModelToReplenishWithCallTrace:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)player;

@end
