@class NSString;

@interface AWEClientAIFeedController : AWEBaseController <AWEFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)onDataSourceReload;
- (void)willConfigureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)willPlayCell:(id)a0 indexPath:(id)a1 currentModel:(id)a2;
- (void)viewDidAppear;
- (void)scrollViewDidEndDecelerating:(id)a0;

@end
