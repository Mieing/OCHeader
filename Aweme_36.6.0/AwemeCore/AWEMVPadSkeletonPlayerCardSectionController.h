@class UIView;

@interface AWEMVPadSkeletonPlayerCardSectionController : AWEBaseListSectionController

@property (weak, nonatomic) UIView *currentCell;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (long long)waterfallColumnCount;
- (double)padSpacing;
- (double)expectCornerRadius;
- (long long)occupyColumnCount;
- (long long)totalColumnCount;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
