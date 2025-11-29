@class UIImageView, AWENearbyC2ToolBarMorePanelItemModel, UILabel, AWENearbyAttributedLabel;

@interface AWENearbyC2ToolBarMorePanelItemCell : UITableViewCell

@property (retain, nonatomic) AWENearbyC2ToolBarMorePanelItemModel *itemModel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) AWENearbyAttributedLabel *attributedLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (nonatomic) BOOL isLargeMode;

- (void)updateCellWithModel:(id)a0;
- (id)iconImageModelWithEntranceConfigList:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupLayout;

@end
