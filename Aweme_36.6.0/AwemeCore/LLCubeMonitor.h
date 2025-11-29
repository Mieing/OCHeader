@class NSString, NSDictionary, NSSet, LLCubeModel, NSNumber;
@protocol LLCubeMonitorDataSource;

@interface LLCubeMonitor : NSObject

@property (weak, nonatomic) LLCubeModel *cubeModel;
@property (copy, nonatomic) NSString *cubeUrl;
@property (nonatomic) double openTime;
@property (nonatomic) double createEndTime;
@property (nonatomic) double updateDataStartTime;
@property (nonatomic) long long updateDataSize;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) long long preloadType;
@property (nonatomic) BOOL isUsed;
@property (copy, nonatomic) NSDictionary *timingInfo;
@property (copy, nonatomic) NSDictionary *updateTimingInfo;
@property (nonatomic) double instanceCreateCost;
@property (copy, nonatomic) NSNumber *totalFcp;
@property (copy, nonatomic) NSNumber *firstUpdateDataTime;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *bid;
@property (weak, nonatomic) id<LLCubeMonitorDataSource> dataSource;
@property (copy, nonatomic) NSSet *teaWhiteList;
@property (nonatomic) double startSchemaCost;
@property (nonatomic) double updateSchemaCost;
@property (retain, nonatomic) NSDictionary *logCommonParams;

- (id)threadStrategy;
- (id)commonCategoryProps;
- (void)trackEvent:(id)a0 metric:(id)a1 category:(id)a2;
- (id)totalFcpFromSetupInfo:(id)a0;
- (double)getDurationFromLifeCycleDictionary:(id)a0 startTime:(id)a1 endTime:(id)a2;
- (id)fetchTotalFmp;
- (id)fetchTotalActualFmp;
- (id)fetchLastDrawEnd;
- (id)fetchSetupDrawEnd;
- (void)startCreateInstance:(id)a0 openTime:(double)a1;
- (void)didCreateInstance:(long long)a0 errorMsg:(id)a1;
- (void)didFetchResource:(id)a0 error:(id)a1;
- (void)didLoadURL:(id)a0 error:(id)a1;
- (void)destroyWithLoadStatus:(id)a0;
- (void)startUpdateCubeMode:(id)a0;
- (void)didUpdateDataWithDataSize:(long long)a0;
- (void)didUpdateGlobalProps:(id)a0 duration:(double)a1 fullUrl:(id)a2;
- (void)recordSetupTimingInfo:(id)a0;
- (void)recordUpdateTimingInfo:(id)a0;
- (void)trackTimeLine:(id)a0 loadStatus:(id)a1;
- (void).cxx_destruct;

@end
