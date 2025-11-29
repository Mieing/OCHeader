@class UIImageView, UILabel, UIView;
@protocol IESLiveVideoAdjustPanelItemCellDatasource;

@interface IESLiveVideoAdjustPanelItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *notDefaultValueDot;
@property (weak, nonatomic) id<IESLiveVideoAdjustPanelItemCellDatasource> datasource;
@property (nonatomic) long long cellIndex;

- (void)configSubViews;
- (void)reloadDataWithCellIndex:(long long)a0;
- (void)showDefaultUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)markAsRead;

@end
