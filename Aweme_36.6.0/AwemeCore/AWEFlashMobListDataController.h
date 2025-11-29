@class NSString;

@interface AWEFlashMobListDataController : AWEListDataController

@property (copy, nonatomic) NSString *flashMobID;
@property (nonatomic) long long cursor;

+ (id)generateAwemeModelList:(id)a0;

- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (id)initWithFlashMobID:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
