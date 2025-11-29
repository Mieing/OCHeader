@class WCDataItem, CContact, NSMutableArray;

@interface WCTogetherDisplayInfo : NSObject

@property (retain, nonatomic) WCDataItem *referredDataItem;
@property (readonly, nonatomic) BOOL isAuthoredByCurrentUser;
@property (retain, nonatomic) CContact *currentUser;
@property (readonly, nonatomic) BOOL containsCurrentUser;
@property (readonly, nonatomic) NSMutableArray *friends;
@property (readonly, nonatomic) BOOL containsFriends;
@property (readonly, nonatomic) NSMutableArray *otherUsernames;
@property (readonly, nonatomic) BOOL containsOtherUsers;
@property (readonly, nonatomic) BOOL containsAnyUsers;

- (id)init;
- (BOOL)containsTogetherUsers;
- (void).cxx_destruct;

@end
