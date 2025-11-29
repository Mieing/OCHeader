@class NSString, NSMutableDictionary, NSMutableArray;

@interface AFDRecommendToFriendUserService : NSObject <AWEUserMessage, AFDRecommendToFriendUserServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *userFollowStatusDict;
@property (retain, nonatomic) NSMutableDictionary *userBlockedStatusDict;
@property (retain, nonatomic) NSMutableDictionary *userRemoveFansStatusDict;
@property (retain, nonatomic) NSMutableDictionary *userAliasDict;
@property (retain, nonatomic) NSMutableArray *deleteItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (id)getUserAlias:(id)a0;
- (BOOL)needFilterdWithUserID:(id)a0;
- (id)filterUserList:(id)a0 forAwemeModel:(id)a1;
- (void)handleDeleteNotification:(id)a0;
- (id)filterUserListForAwemeModel:(id)a0;
- (id)needFilterUsers:(id)a0 forAwemeModel:(id)a1;
- (void)handlePrivacyWithType:(unsigned long long)a0 status:(BOOL)a1 userID:(id)a2;
- (void)saveUserAlias:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)resetCache;
- (void)dealloc;

@end
