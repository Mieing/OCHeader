@class NSIndexPath;
@protocol UICollectionViewDelegatePinBottomFlowLayout;

@interface WCPinBottomCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (readonly, weak, nonatomic) id<UICollectionViewDelegatePinBottomFlowLayout> collectionViewDelegate;
@property (retain, nonatomic) NSIndexPath *indexPathForItemPinnedBottom;

- (id)init;
- (void)setScrollDirection:(long long)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)needPinBottom;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pinnedItemBackgroundFrame;
- (double)currentCollectionViewBoundsBottom;
- (void).cxx_destruct;

@end
