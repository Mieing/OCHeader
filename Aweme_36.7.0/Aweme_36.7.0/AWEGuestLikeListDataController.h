@class NSString;
@protocol AWEGuestLikeListDataControllerDelegate;

@interface AWEGuestLikeListDataController : AWEListDataController

@property (copy, nonatomic) NSString *nextPageToken;
@property (weak, nonatomic) id<AWEGuestLikeListDataControllerDelegate> delegate;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchWithPullType:(long long)a0 completion:(id /* block */)a1;
- (void)delegate_loadMoreWithCompletion:(id)a0 error:(id)a1;
- (void)delegateCallWithPullType:(long long)a0 list:(id)a1 error:(id)a2;
- (void)delegate_initFetchWithCompletion:(id)a0 error:(id)a1;
- (void)delegate_refreshWithCompletion:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)resetData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
