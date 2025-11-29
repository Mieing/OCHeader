@class UILabel, DUXSwitch, AWELandscapeMorePanelCellModel;

@interface AWELandscapeMorePanelListSwitchCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXSwitch *switchView;
@property (retain, nonatomic) AWELandscapeMorePanelCellModel *currentCellModel;

- (void)updateWithPanelCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
