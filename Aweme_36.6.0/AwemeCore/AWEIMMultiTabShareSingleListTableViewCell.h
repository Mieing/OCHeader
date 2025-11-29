@class AWEIMMultiTabShareSingleListCellViewModel, DUXBasicButton, UIImageView, UILabel, UIView;

@interface AWEIMMultiTabShareSingleListTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) DUXBasicButton *sendBtn;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEIMMultiTabShareSingleListCellViewModel *viewModel;

- (void)configWithModel:(id)a0;
- (void)p_updateBtnStyle;
- (void)p_onShareButtonClick;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
