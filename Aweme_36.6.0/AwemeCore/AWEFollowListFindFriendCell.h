@class UIView;

@interface AWEFollowListFindFriendCell : UICollectionViewCell

@property (nonatomic) BOOL isMine;
@property (retain, nonatomic) UIView *findFriendView;

- (id)footerForFindFriend:(id)a0 isMine:(BOOL)a1;
- (void)findFriendsButtonTapped;
- (id)enterMethodForRecommend;
- (void)configCell:(id)a0 isMine:(BOOL)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
