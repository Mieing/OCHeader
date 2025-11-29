@class UIControl, IESIMRecentDeleteCellViewModel, UIImageView, UILabel;
@protocol IESIMCheckBoxProtocol;

@interface IESIMRecentDeleteListCell : UITableViewCell

@property (retain, nonatomic) UIControl<IESIMCheckBoxProtocol> *radio;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *tailLabel;
@property (weak, nonatomic) IESIMRecentDeleteCellViewModel *viewModel;

- (void)renderWithViewModel:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setChecked:(BOOL)a0;
- (BOOL)isChecked;
- (void)setupUI;

@end
