@class AWEPostWorkSwitchLoadingSectionModel, AWEBinding, AWEPostWorkSwitchSortLoadView;

@interface AWEPostWorkSwitchLoadingCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEPostWorkSwitchSortLoadView *switchLoadingView;
@property (retain, nonatomic) AWEPostWorkSwitchLoadingSectionModel *model;
@property (retain, nonatomic) AWEBinding *binding;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
