@class NSString;

@interface AWEUserRecommendContactManager : NSObject <AWEUserRecommendContactManagerProtocol>

@property (nonatomic) BOOL hasContactFriendsCellClosed;
@property (nonatomic) BOOL hasContactFriendsCellShowed;
@property (copy, nonatomic) NSString *enterFromOnCallAddressBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowContactFriendsCellCommonCondition;
+ (id)contactFriendModel;
+ (id)sharedInstance;

- (void)saveEnterFromOnCallAddressBook:(id)a0;
- (long long)contactFriendsCellIndex:(long long)a0;
- (BOOL)canShowContactFriendsCell:(long long)a0;
- (void)showContactFriendsCell:(id)a0;
- (void)closeContactFriendsCell:(id)a0;
- (void)clickContactFriendsCell:(id)a0;
- (id)checkCellArrayNeedContactFriends:(id)a0 contactIndex:(long long)a1;
- (id)updateContactModelInArray:(id)a0 contactIndex:(long long)a1;
- (void).cxx_destruct;

@end
