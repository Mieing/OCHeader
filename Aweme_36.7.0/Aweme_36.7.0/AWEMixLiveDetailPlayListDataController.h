@class NSNumber, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AWEMixLiveDetailPlayListDataController : AWEListDataController

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mixDataQueue;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (copy, nonatomic) NSNumber *maxCursor;
@property (retain, nonatomic) NSString *mixId;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchWithCount:(long long)a0 type:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
