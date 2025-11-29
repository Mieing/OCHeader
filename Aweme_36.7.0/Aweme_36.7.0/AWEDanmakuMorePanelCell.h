@class AWEDanmakuMorePanelCellModel, DUXSwitch, UILabel, DUXBaseImageView, UIView;

@interface AWEDanmakuMorePanelCell : UITableViewCell

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) DUXBaseImageView *icon;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) DUXBaseImageView *arrowImageView;
@property (retain, nonatomic) DUXSwitch *switchView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) AWEDanmakuMorePanelCellModel *model;

+ (double)cellHeight;

- (void)updateTextColor:(id)a0;
- (void)updateWithCellModel:(id)a0;
- (void)updateCornerState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
