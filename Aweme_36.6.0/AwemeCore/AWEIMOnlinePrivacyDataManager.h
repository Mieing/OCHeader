@class NSArray, NSOrderedSet, NSMutableArray, AWEListDataController;
@protocol AWEFriendsListDataControllerProtocol;

@interface AWEIMOnlinePrivacyDataManager : NSObject

@property (retain, nonatomic) NSMutableArray *selectedSecUidList;
@property (copy, nonatomic) NSArray *lastSelectedList;
@property (retain, nonatomic) AWEListDataController<AWEFriendsListDataControllerProtocol> *friendsDataController;
@property (retain, nonatomic) NSOrderedSet *intimateFriendsSet;
@property (retain, nonatomic) NSMutableArray *realFriendsList;
@property (retain, nonatomic) NSMutableArray *sectionHeaderTitles;
@property (retain, nonatomic) NSMutableArray *sectionData;
@property (nonatomic) BOOL isRequestFriendsListOnAir;

+ (BOOL)isLightStyle;
+ (id)maxSelectCountToast;

- (BOOL)isUserSelected:(id)a0;
- (BOOL)canAddSelectedUser;
- (void)p_fetchLocalFriendsDataUseLocalUidsWithCompletion:(id /* block */)a0;
- (void)fetchLocalContactListWithFriendsIds:(id)a0 isDiskCache:(BOOL)a1 completion:(id /* block */)a2;
- (id)initWithSelectedUserList:(id)a0;
- (BOOL)checkAndAddOrRemoveSearchUser:(id)a0;
- (BOOL)checkAndAddOrRemoveUser:(id)a0;
- (void)fetchFamiliarFriendsListWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
