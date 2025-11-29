@class AWEGrouponAttributedLabel, UIImageView, AWEGrouponC2ToolBarMorePanelItemModel, UILabel;

@interface AWEGrouponC2ToolBarMorePanelItemCell : UITableViewCell

@property (retain, nonatomic) AWEGrouponC2ToolBarMorePanelItemModel *itemModel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) AWEGrouponAttributedLabel *attributedLabel;
@property (retain, nonatomic) UIImageView *arrowImgView;
@property (nonatomic) BOOL isLargeMode;

- (void)updateCellWithModel:(id)a0;
- (id)iconImageModelWithEntranceConfigList:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;
- (void)setupLayout;

@end
