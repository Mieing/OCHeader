@class UIImageView, UILabel, YYLabel;
@protocol AWELunaUgCommentStylePopViewCellDelegate;

@interface AWELunaUgCommentStylePopViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *createTimeLabel;
@property (retain, nonatomic) YYLabel *commentContentLabel;
@property (retain, nonatomic) UIImageView *diggIcon;
@property (retain, nonatomic) UILabel *diggCountLabel;
@property (weak, nonatomic) id<AWELunaUgCommentStylePopViewCellDelegate> delegate;

- (void)configSubviews;
- (void)p_didClickContent;
- (void)p_didClickDigg;
- (void)updateWithContent:(id)a0 avatar:(id)a1 author:(id)a2 createTime:(id)a3 diggCount:(id)a4;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
