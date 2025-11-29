@class UIImageView, UILabel, UIView, UIButton;
@protocol AWEPublishSuccessBottomViewIMTableViewCellDelegate;

@interface AWEPublishSuccessBottomViewIMTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *separator;
@property (nonatomic) BOOL shared;
@property (retain, nonatomic) UIButton *selectButton;
@property (weak, nonatomic) id<AWEPublishSuccessBottomViewIMTableViewCellDelegate> delegate;

- (void)configWithShareModel:(id)a0;
- (void)showSeparator:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
