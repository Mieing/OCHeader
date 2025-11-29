@class UIImageView, IESLiveMultiTabModel, UIView, IESLiveAnimatedImageView, UILabel;

@interface IESLiveMultiTabSelectionCell : UICollectionViewCell

@property (nonatomic) BOOL enablePull;
@property (nonatomic) BOOL enableDoubleTap;
@property (nonatomic) BOOL publicScreenViewWillShow;
@property (retain, nonatomic) IESLiveMultiTabModel *model;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIImageView *unselectedArrowImageView;
@property (retain, nonatomic) IESLiveAnimatedImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL currentSelected;

- (void)doubleTapAction:(id)a0;
- (void)updateWithCellModel:(id)a0;
- (void)setupTabSeletionCell;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)tapAction;

@end
