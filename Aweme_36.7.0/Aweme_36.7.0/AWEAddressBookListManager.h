@class NSNumber, NSMutableArray;

@interface AWEAddressBookListManager : NSObject

@property (retain, nonatomic) NSMutableArray *addressBookUserList;
@property (retain, nonatomic) NSMutableArray *addressBookUnfollowUsers;
@property (retain, nonatomic) NSMutableArray *addressBookNotUnfollowUsers;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *registerCount;
@property (retain, nonatomic) NSMutableArray *removedUsers;

+ (BOOL)enableAddressBookListNewOrderStyle;
+ (BOOL)enableChangeAddressbookListStyle;

- (void)loadMore:(id /* block */)a0;
- (BOOL)canLoadMore;
- (id)filterRemovedUsers:(id)a0;
- (void)loadAddressListPartUsers;
- (void)refresh:(id /* block */)a0 needDegraded:(BOOL)a1;
- (id)filterDuplicateUsers:(id)a0;
- (void)changeUserList:(id)a0;
- (id)unfollowUserList;
- (id)notUnfollowUserList;
- (void)removeUser:(long long)a0 isUnfollow:(BOOL)a1;
- (void)insertUser:(id)a0 index:(long long)a1 isUnfollow:(BOOL)a2;
- (void)removeUserFromFullUserList:(long long)a0;
- (void)insertUserToFullUserList:(id)a0 index:(long long)a1;
- (void)addressBookDislikeUserItem:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)userList;
- (id)init;
- (void)refresh:(id /* block */)a0;

@end
