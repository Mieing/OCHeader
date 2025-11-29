@class UIImageView, UILabel, AWEIMPushGuideSelection, UIView;

@interface AWEIMV3PushGuideSelectByTypeCell : UITableViewCell

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) AWEIMPushGuideSelection *model;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *rightStatusImageView;
@property (retain, nonatomic) UIView *containerView;

- (void)configWithModel:(id)a0 isActive:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;

@end
