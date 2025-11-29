@class NSString, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AWELiveAcqCastVideoMixListDataManager : AWEListDataController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixDataQueue;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (copy, nonatomic) NSString *mixVideoID;
@property (copy, nonatomic) NSNumber *minCursor;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) BOOL richAwemeEnabled;

+ (void)requestMixVideoDetailList:(id)a0 cursor:(id)a1 count:(id)a2 roomID:(id)a3 pullDown:(BOOL)a4 completeBlock:(id /* block */)a5;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)sortArrayByExcuteDate:(id)a0;
- (void)p_filterRichAwemeIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
