@class UIImageView, UILabel, AWEECOMIMMsgForwardCellModel;

@interface AWEECOMIMMsgForwardCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *selectedLabel;
@property (retain, nonatomic) AWEECOMIMMsgForwardCellModel *cellModel;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
