@class BDXCategoryViewAnimator, NSMutableArray, BDXCategoryBaseCellModel;

@interface BDXCategoryBaseCell : UICollectionViewCell

@property (retain, nonatomic) BDXCategoryBaseCellModel *cellModel;
@property (retain, nonatomic) BDXCategoryViewAnimator *animator;
@property (retain, nonatomic) NSMutableArray *animationBlockArray;

- (BOOL)checkCanStartSelectedAnimation:(id)a0;
- (void)addSelectedAnimationBlock:(id /* block */)a0;
- (void)startSelectedAnimationIfNeeded:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)reloadData:(id)a0;
- (void)initializeViews;

@end
