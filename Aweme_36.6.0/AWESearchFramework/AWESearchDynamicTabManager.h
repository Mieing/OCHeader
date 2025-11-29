@class AWESearchResultViewController;
@protocol AWEHttpTask;

@interface AWESearchDynamicTabManager : NSObject

@property (weak, nonatomic) AWESearchResultViewController *searchResultVC;
@property (retain, nonatomic) id<AWEHttpTask> dynamicTabTask;

- (void)fetchDynamicTabsWithCompletion:(id /* block */)a0;
- (void)cancelDynamicTabTask;
- (id)initWithSearchResultVC:(id)a0;
- (void).cxx_destruct;

@end
