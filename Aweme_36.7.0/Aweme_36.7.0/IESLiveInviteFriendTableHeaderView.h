@class UIImageView, UIImage, UIView, UILabel, NSMutableArray;

@interface IESLiveInviteFriendTableHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIImageView *oneFriendBubbleView;
@property (retain, nonatomic) UIImageView *twoFriendBubbleView;
@property (retain, nonatomic) UIImage *secondFriendAvatar;
@property (retain, nonatomic) UIView *labelView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSMutableArray *friendList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 friendList:(id)a1;
- (void).cxx_destruct;
- (void)setupView;

@end
