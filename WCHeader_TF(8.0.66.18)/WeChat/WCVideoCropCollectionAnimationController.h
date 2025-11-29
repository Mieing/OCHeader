@class UICollectionView, NSMutableDictionary, NSMutableSet;

@interface WCVideoCropCollectionAnimationController : UIView

@property (retain, nonatomic) NSMutableDictionary *imageViewsOnShow;
@property (retain, nonatomic) NSMutableSet *imageViewsUnused;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isEnlarged;
@property (nonatomic) long long enlargedCellRow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newFrame;

+ (id)sharedInstance;
+ (void)beginAnimationForCollectionView:(id)a0 enlargedCellRow:(unsigned long long)a1 collectionViewNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isEnlarge:(BOOL)a3;

- (void)beginAnimationForCollectionView:(id)a0 enlargedCellRow:(long long)a1 collectionViewNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 isEnlarge:(BOOL)a3;
- (void)showEnlargeAnimation;
- (void)showRestoreAnimation;
- (id)keyForElementIndex:(long long)a0 isInserted:(BOOL)a1;
- (void).cxx_destruct;

@end
