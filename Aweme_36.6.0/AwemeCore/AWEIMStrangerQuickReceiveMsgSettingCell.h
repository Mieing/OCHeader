@class UILabel, AWEIMStrangerQuickReceiveMsgViewModel, UIView;
@protocol IESIMCheckBoxProtocol, IESIMDividerProtocol;

@interface AWEIMStrangerQuickReceiveMsgSettingCell : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView<IESIMCheckBoxProtocol> *checkBox;
@property (retain, nonatomic) UIView<IESIMDividerProtocol> *divider;
@property (retain, nonatomic) AWEIMStrangerQuickReceiveMsgViewModel *viewModel;
@property (nonatomic) BOOL showDivider;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateWithViewModel:(id)a0;
- (void)updateChecked:(BOOL)a0;
- (void)updateWithTitle:(id)a0;
- (void)setUpUI;

@end
