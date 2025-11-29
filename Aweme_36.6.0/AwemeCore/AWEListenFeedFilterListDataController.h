@class NSString;

@interface AWEListenFeedFilterListDataController : AWEListDataController

@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long offset;
@property (nonatomic) long long count;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithScene:(id)a0;

@end
