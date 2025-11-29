@interface AWEIMLiveSubscribeMemberDataManager : NSObject

@property (nonatomic) unsigned long long ownerID;
@property (nonatomic) unsigned long long groupCreateType;
@property (nonatomic) unsigned long long pageCursor;
@property (nonatomic) BOOL hasMoreSubscribe;

- (id)fetchUrl;
- (void)__fetchLiveSubscribeMemberWithCompletion:(id /* block */)a0;
- (void)fetchFirstPageSubscribeUsersWithCompletion:(id /* block */)a0;
- (void)loadMoreSubscribeUsersWithCompletion:(id /* block */)a0;

@end
