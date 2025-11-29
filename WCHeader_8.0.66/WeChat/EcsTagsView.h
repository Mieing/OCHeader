@class ZZFLEXAngel, EcsTagsViewModel, UICollectionView;

@interface EcsTagsView : UIView

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ZZFLEXAngel *angel;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) EcsTagsViewModel *tagsVM;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setupUI;
- (void).cxx_destruct;

@end
