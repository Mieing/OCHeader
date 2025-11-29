@class NSMutableDictionary, NSDictionary, AWEGrouponLifeFeedsDataParseTask, AWEGrouponLifeFeedsNetworkImpl;
@protocol AWENearbyModuleService;

@interface AWEGrouponLifeFeedsFetchDataTask : NSObject

@property (retain, nonatomic) AWEGrouponLifeFeedsNetworkImpl *networkImpl;
@property (retain, nonatomic) AWEGrouponLifeFeedsDataParseTask *parseTask;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (readonly, nonatomic) id<AWENearbyModuleService> nearbyService;
@property (retain, nonatomic) NSMutableDictionary *networkTrackParams;
@property (nonatomic) double startTime;

- (void)didFinishFetchData:(id)a0;
- (id)getServerTiming:(id)a0 param:(id)a1;
- (void)fetchDataWithParams:(id)a0 complete:(id /* block */)a1;
- (void)invokeFailureCompleteBlockWithError:(id)a0;
- (void)addTaskTrackParamsFromRequestQuery:(id)a0;
- (void)didFinishFetchRealTimeUserActions:(id)a0;
- (void)tryFetchRealTimeUserActions:(id /* block */)a0;
- (void)recordTimingParams:(id)a0;
- (void)didFinishParseData:(id)a0;
- (void).cxx_destruct;

@end
