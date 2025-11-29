@class AWEMVChannelRequestDuration, NSMutableSet, AWEAwemeResponseModel;

@interface AWEMVChannelQualityMonitor : NSObject

@property (retain, nonatomic) AWEAwemeResponseModel *lastResponseModel;
@property (retain, nonatomic) NSMutableSet *trackFilterSet;
@property (nonatomic) BOOL isScrolled;
@property (retain, nonatomic) AWEMVChannelRequestDuration *requestDuration;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)trackChunk1ReturnModelNotInChunk0WithModel:(id)a0;
+ (id)timingParamsForTrackListRefresh:(id)a0;
+ (void)trackCardBeingFilteredAfterRefreshWithType:(unsigned long long)a0 leftModelCount:(unsigned long long)a1;
+ (void)trackFirstFrameLoadedImageIfNeededWithInfo:(id)a0;
+ (id)trackFirstImageRequestDate;
+ (void)trackImage:(id)a0 url:(id)a1 error:(id)a2 extraParams:(id)a3;
+ (void)trackRefreshWithReason:(unsigned long long)a0 dataState:(long long)a1 isCancel:(BOOL)a2 isStop:(BOOL)a3;
+ (id)shared;

- (id)aAWEPadModuleAdapter;
- (BOOL)isFirstRequest;
- (void)trackDataError:(unsigned long long)a0 requestNums:(long long)a1 extraParams:(id)a2;
- (void)trackListRefreshWithRequestDuration:(double)a0 responseModel:(id)a1 requestNums:(long long)a2 feedType:(long long)a3 fetchType:(long long)a4 refreshType:(long long)a5 loadmoreType:(long long)a6 preloadType:(long long)a7 pullType:(long long)a8 isCache:(long long)a9 error:(id)a10 extraParams:(id)a11;
- (void)trackLoadMoreDuration:(double)a0 feedType:(long long)a1 from:(long long)a2 error:(id)a3 extraParams:(id)a4;
- (void)trackMVChannelEntranceStrategyDuration:(double)a0 error:(id)a1 extraParams:(id)a2;
- (id)paramsForImageMonitor:(id)a0;
- (BOOL)imageHadMonitorWithModel:(id)a0;
- (unsigned long long)imageErrorTypeWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
