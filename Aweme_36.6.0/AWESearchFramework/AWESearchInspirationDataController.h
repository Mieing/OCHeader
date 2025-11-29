@class NSNumber, AWESearchHomePageInspirationManager;
@protocol AWEHttpTask;

@interface AWESearchInspirationDataController : NSObject

@property (nonatomic) long long requestID;
@property (retain, nonatomic) NSNumber *lastRequestTime;
@property (retain, nonatomic) AWESearchHomePageInspirationManager *shareInstance;
@property (weak, nonatomic) id<AWEHttpTask> currentTask;

- (void)preFetchSuggestWordDataWithCompletion:(id /* block */)a0 fromPage:(unsigned long long)a1;
- (id)durationWithBeginTime:(double)a0 endTime:(double)a1;
- (id)historySearchQueryList;
- (id)historySearchQueries;
- (id)filterRequestArray:(id)a0;
- (id)buildHomePageParamsWithPage:(unsigned long long)a0;
- (id)buildVideoDetailParamsWithPage:(unsigned long long)a0;
- (id)buildParamsWithPage:(unsigned long long)a0;
- (void)updateLastSearchTime;
- (void).cxx_destruct;
- (id)init;

@end
