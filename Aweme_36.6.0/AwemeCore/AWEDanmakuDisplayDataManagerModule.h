@class NSString, NSTimer, NSObject, AWEVideoPlayDanmakuService;
@protocol OS_dispatch_queue;

@interface AWEDanmakuDisplayDataManagerModule : AWEDanmakuBaseModule <AWEDanmakuDisplayDataModuleProtocol>

@property (retain, nonatomic) AWEVideoPlayDanmakuService *danmakuDataService;
@property (nonatomic) double beginTimeInterval;
@property (nonatomic) double endTimeInterval;
@property (nonatomic) long long errorTime;
@property (nonatomic) long long errorTimeCount;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isFirstTimeFetchData;
@property (nonatomic) BOOL shouldRequestDowngrade;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *danmakuDataHandleQueue;
@property (nonatomic) BOOL hasInsertLocalGuideDanmaku;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayerWillLoopPlaying:(id)a0;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerStop:(id)a0;
- (void)clearDanmakuForRefresh;
- (void)fetchDanmakuWithDanmakuIds:(id)a0 completion:(id /* block */)a1;
- (id)generateDanmakusWithData:(id)a0;
- (void)onPlayerPlay:(id)a0;
- (void)onPlayerSeekProgressUpdate:(id)a0;
- (void)onVideoPlayerPlay:(id)a0;
- (void)onVideoPlayerDidReadyForDisplay:(id)a0;
- (void)initializeModule;
- (void)requestDanmakuIfNeed;
- (void)clearCacheDanmakuDatas;
- (void)startIfNeed;
- (double)videoPlayOffset;
- (void)startIfNeed:(double)a0;
- (void)seek;
- (id)obtainNeedInsertGuideDanmakuData:(id)a0;
- (void)didReceivedAppendData:(id)a0;
- (BOOL)shouldRequestNewDanmakuData;
- (void)requestDanmaku;
- (void)preInsertGuideDanmakuIfNeed;
- (id)findTargetDanmakuDatasInCacheWithStartTime:(double)a0;
- (void)addDanmakuDatasToPlayer:(id)a0;
- (id)obtainDanmakuCount;
- (BOOL)isVerticalVideoScene;
- (void)handleRequestDanmakuDataWithModel:(id)a0;
- (void)didReceivedNewData:(id)a0;
- (BOOL)checkAwemeMatchWithDanmakuData:(id)a0;
- (id)finalDanmakuListResult:(id)a0;
- (void)cacheDanmakuResponseDataIfNeed:(id)a0;
- (id)generateGuideDanmakuModel:(id)a0;
- (void)cacheByIdModel:(id)a0 itemId:(id)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)start;
- (void)reset;
- (void)dealloc;
- (void)setupTimer;
- (void)updateWithModel:(id)a0;
- (void)willDisplay;

@end
