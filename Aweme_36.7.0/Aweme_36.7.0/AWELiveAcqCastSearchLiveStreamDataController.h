@class NSNumber, NSString;
@protocol AFDPlayRemoteAwemeModelProcessorProtocol, AWEHttpTask;

@interface AWELiveAcqCastSearchLiveStreamDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) long long hotSpotCount;
@property (nonatomic) long long refreshCount;
@property (nonatomic) long long loadmoreCount;
@property (readonly, nonatomic) id<AFDPlayRemoteAwemeModelProcessorProtocol> modelProcess;
@property (readonly, nonatomic) BOOL hitLimit;
@property (readonly, copy, nonatomic) NSString *keyword;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id)initWithKeyword:(id)a0;
- (void)reloadWithPullType:(long long)a0 Completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
