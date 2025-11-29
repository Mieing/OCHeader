@class NSString, NSArray;
@protocol WCTogetherFriendsListViewItemDelegate;

@interface WCTogetherFriendsListViewItem : NSObject

@property (readonly, nonatomic) Class cellClass;
@property (weak, nonatomic) id<WCTogetherFriendsListViewItemDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL showsTogetherFriends;
@property (copy, nonatomic) NSArray *togetherFriendsContacts;
@property (readonly, copy, nonatomic) NSString *togetherFriendsNameText;
@property (readonly, copy, nonatomic) NSString *togetherFriendsCountText;
@property (readonly, nonatomic) BOOL canClickFriendsInfo;

- (id)init;
- (void)generateTogetherFriendsTextsIfNeeded;
- (void)clearTogetherFriendsTexts;
- (void)didClickFriendsInfo;
- (void).cxx_destruct;

@end
