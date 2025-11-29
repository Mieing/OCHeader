@class NSDictionary, NSString, NSNumber;
@protocol AWEHttpTask;

@interface AWELiveAcqCastVideoSearchDataManager : AWEListDataController

@property (nonatomic) BOOL hitLimit;
@property (nonatomic) long long loadmoreCount;
@property (nonatomic) long long refreshCount;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *backtrace;
@property (copy, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) long long hotSpotCount;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithKeyword:(id)a0;
- (id)getExpectedSizeInfo;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void)p_filterRichAwemeIfNeed:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
