@class NSString;

@interface AWEFeedHTSUnfollowFamiliarController : AWEBaseController <AWEFeedControllerProtocol, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedInsertUnfollowFamiliarDataDOUYINHTSAdapterClass;

- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (id)aAWEFeedInsertUnfollowFamiliarDataDOUYINHTSAdapter;
- (void)tryInsertVideoWithResponse:(id)a0 context:(id)a1 error:(id)a2;
- (id)init;
- (void)dealloc;

@end
