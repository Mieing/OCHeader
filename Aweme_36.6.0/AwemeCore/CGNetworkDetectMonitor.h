@class NSArray, XPlayQualityStatsModel, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CGNetworkDetectMonitor : CGObject <CGCloudPlayerMessage, CGNetworkMonitor>

@property (nonatomic) long long statisticDurationCount;
@property (nonatomic) long long statisticPushDurationCount;
@property (nonatomic) long long stallCount;
@property (nonatomic) float lossRate;
@property (copy, nonatomic) NSArray *rttLevel;
@property (copy, nonatomic) NSArray *lossRateLevel;
@property (copy, nonatomic) NSArray *jitterLevel;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) long long curBlockCountToToast;
@property (nonatomic) long long curBlockCountToPush;
@property (retain, nonatomic) XPlayQualityStatsModel *stats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRemoteStreamStats:(id)a2;
- (void)item:(id)a0 cloudPlayer:(id)a1 onRoomStats:(id)a2;
- (void)setupWithSetting;
- (long long)calcComboNetStatus:(id)a0;
- (void)setXPlayQualityModelWithRemoteStreamStats:(id)a0;
- (void)setXPlayQualityModelWithRoomStats:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
