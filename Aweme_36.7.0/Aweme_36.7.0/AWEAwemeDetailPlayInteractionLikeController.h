@class NSString;

@interface AWEAwemeDetailPlayInteractionLikeController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)loadPreviousCompletion:(id)a0 error:(id)a1 isHeaderRefreshing:(BOOL)a2;
- (void)loadMoreCompletionWithData:(id)a0;
- (void)loadResourceWithList:(id)a0 triggerBy:(SEL)a1;

@end
