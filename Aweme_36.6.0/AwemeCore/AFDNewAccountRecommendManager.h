@class NSArray, NSString;

@interface AFDNewAccountRecommendManager : NSObject <AFDNewAccountRecommendManagerProtocol>

@property (retain, nonatomic) NSArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)showEntryForPrivateAccount;
- (void)newAccountEnterFrom:(id)a0 enterMethod:(id)a1;
- (BOOL)canAddAccount;
- (void)simplifyNewAccountEnterFrom:(id)a0 enterMethod:(id)a1;
- (long long)countOfDataSource;
- (id)genetateNewAccountFollowPageWithFinishBlock:(id /* block */)a0 enterMethod:(id)a1 enterFrom:(id)a2;
- (BOOL)showEntryforSwitchAccount;
- (void)followUserWithListModel:(id)a0 completion:(id /* block */)a1;
- (void)followPrivateUserWithListModel:(id)a0;
- (void)unfollowUserWithListModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchWithCompletion:(id /* block */)a0;

@end
