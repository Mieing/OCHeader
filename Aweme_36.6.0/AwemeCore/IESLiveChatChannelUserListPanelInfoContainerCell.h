@class UILabel;

@interface IESLiveChatChannelUserListPanelInfoContainerCell : IESLiveChatChannelUserListPanelBaseCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (void)reloadWithCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;

@end
