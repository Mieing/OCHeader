@protocol AWEQuickFlashListDataControllerDelegate;

@interface AWEQuickFlashListDataController : AWEListDataController

@property (weak, nonatomic) id<AWEQuickFlashListDataControllerDelegate> delegate;

- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
