@interface AWETeenFeedUnconsumedReplaceController : AWETeenFeedBaseController

@property (nonatomic) long long maxReachedIndex;
@property (nonatomic) BOOL isRefresh;

- (void)beginRequestDataFromRefresh:(BOOL)a0;
- (void)endRequestDataSuccess:(BOOL)a0 error:(id)a1 fromRefresh:(BOOL)a2;
- (id)init;
- (void)scrollViewDidScroll:(id)a0;

@end
