@class NSArray, NSDictionary, NSIndexPath;

@interface LynxCollectionInvalidationContext : UICollectionViewLayoutInvalidationContext

@property (nonatomic) unsigned long long invalidationType;
@property (readonly, nonatomic) NSArray *removals;
@property (readonly, nonatomic) NSArray *insertions;
@property (readonly, nonatomic) NSArray *moveFrom;
@property (readonly, nonatomic) NSArray *moveTo;
@property (readonly, nonatomic) NSDictionary *updates;
@property (readonly, nonatomic) NSArray *fullSpanItems;
@property (readonly, nonatomic) NSArray *stickyTopItems;
@property (readonly, nonatomic) NSArray *stickyBottomItems;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly, nonatomic) BOOL hasInsetUpdates;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) double mainAxisGap;
@property (readonly, nonatomic) double crossAxisGap;
@property (readonly, nonatomic) unsigned long long layoutType;
@property (readonly, nonatomic, getter=isAnimated) BOOL animated;
@property (readonly, nonatomic) BOOL didSetInitialScrollIndex;
@property (readonly, nonatomic, getter=isSelfSizing) BOOL selfSizing;
@property (nonatomic) struct CGPoint { double x; double y; } currentContentOffset;
@property (retain, nonatomic) NSIndexPath *indexPathContainsContentOffset;
@property (readonly, nonatomic) NSDictionary *estimatedHeights;

- (id)initWithNumberOfItemsChanging:(long long)a0 fullSpanItems:(id)a1 stickyTopItems:(id)a2 stickyBottomItems:(id)a3 estimatedHeights:(id)a4;
- (id)initWithFullSpanItems:(id)a0 stickyTopItems:(id)a1 stickyBottomItems:(id)a2 estimatedHeights:(id)a3;
- (id)initWithRemovals:(id)a0 insertions:(id)a1 moveFrom:(id)a2 moveTo:(id)a3 fullSpanItems:(id)a4 stickyTopItems:(id)a5 stickyBottomItems:(id)a6 estimatedHeights:(id)a7;
- (id)initWithBoundsChanging:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithLayoutTypeSwitching:(unsigned long long)a0;
- (id)initWithNumberOfColumnsChanging:(unsigned long long)a0;
- (id)initWithMainAxisGapChanging:(double)a0;
- (id)initWithCrossAxisGapChanging:(double)a0;
- (id)initWithInsetChanging:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithUpdateAtIndexPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithResetAnimationTo:(BOOL)a0;
- (id)initWithSelfSizingCellAtIndexPath:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 collectionView:(id)a2 isHorizontal:(BOOL)a3;
- (id)initWithInitialScrollIndexSet;
- (void).cxx_destruct;
- (id)init;

@end
