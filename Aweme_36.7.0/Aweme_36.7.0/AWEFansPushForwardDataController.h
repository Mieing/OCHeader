@class NSNumber, NSArray;

@interface AWEFansPushForwardDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long total;
@property (retain, nonatomic) NSArray *liveTagEnabledIndexArray;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)getParams;
- (id)p_generateLiveTagEnableIndexArray;
- (void).cxx_destruct;
- (id)init;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
