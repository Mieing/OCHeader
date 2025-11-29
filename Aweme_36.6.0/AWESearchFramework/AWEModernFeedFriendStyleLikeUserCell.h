@class AWEFriendStyleLikeUserCellFrame, UIImageView, UIView, YYLabel;

@interface AWEModernFeedFriendStyleLikeUserCell : AWEFriendStyleBaseCell

@property (retain, nonatomic) UIImageView *avatarImageView1;
@property (retain, nonatomic) UIImageView *avatarImageView2;
@property (retain, nonatomic) UIImageView *avatarImageView3;
@property (retain, nonatomic) YYLabel *displayLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) YYLabel *showMoreLabel;
@property (retain, nonatomic) UIView *containerBackgroundView;
@property (copy, nonatomic) id /* block */ userNameTappedBlock;
@property (copy, nonatomic) id /* block */ containerViewTappedBlock;
@property (retain, nonatomic) AWEFriendStyleLikeUserCellFrame *likeUserCellFrame;

- (void)cancelImageRequest;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 isInsStyle:(BOOL)a2;
- (void)containerViewTapped:(id)a0;
- (id)generateAvatarImageView;
- (void).cxx_destruct;

@end
