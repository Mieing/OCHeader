@class UIControl, IESIMChatDiskCleanCellViewModel, UIImageView, UILabel;
@protocol IESIMCheckBoxProtocol;

@interface IESIMChatDiskCleanTableViewCell : UITableViewCell

@property (retain, nonatomic) UIControl<IESIMCheckBoxProtocol> *radio;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *diskSizeLabel;
@property (retain, nonatomic) IESIMChatDiskCleanCellViewModel *viewModel;

- (void)configWithViewModel:(id)a0 filterType:(unsigned long long)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setChecked:(BOOL)a0;
- (BOOL)isChecked;
- (void)setupUI;

@end
