@class NSString, AFDOnlineAvatarView, UIView, AWEUserModel;

@interface AFDCommentFriendsDiggCollectionViewCell : UICollectionViewCell <AFDOnlineAvatarViewDelegate>

@property (retain, nonatomic) AFDOnlineAvatarView *onlineAvatarView;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) AWEUserModel *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
