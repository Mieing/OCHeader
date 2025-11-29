@class NSString, NSIndexPath, LynxCollectionScroller;

@interface LynxCollectionScroll : NSObject <LynxCollectionScrollerHolderDelegate>

@property (retain, nonatomic) NSIndexPath *lastIndexPathWithValidLayoutAttributes;
@property (nonatomic) BOOL hasEstimatedHeights;
@property (nonatomic) double animationSpeed;
@property (nonatomic) double safeDisappearOffset;
@property (nonatomic) long long initialScrollIndexState;
@property (retain, nonatomic) LynxCollectionScroller *scroller;
@property (nonatomic) long long initialScrollIndex;
@property (nonatomic) BOOL horizontalLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)scrollPositionWithNSString:(id)a0;

- (void)collectionViewWillBeginDragging:(id)a0;
- (void)initialScrollCollectionViewIfNeeded:(id)a0;
- (void)updateWithCellLoadedAtIndexPath:(id)a0;
- (BOOL)scrollWithValidLayoutAttributesOnCollectionView:(id)a0 indexPath:(id)a1 offset:(double)a2 alignTo:(unsigned long long)a3 smooth:(BOOL)a4;
- (void)collectionViewDidEndScrollingAnimation:(id)a0;
- (void)scrollByScroller:(id)a0 indexPath:(id)a1 offset:(double)a2 scrollPosition:(unsigned long long)a3 smooth:(BOOL)a4 callback:(id /* block */)a5;
- (void)scrollHeuristicallyOnCollectionView:(id)a0 indexPath:(id)a1 offset:(double)a2 alignTo:(unsigned long long)a3 smooth:(BOOL)a4 callback:(id /* block */)a5;
- (void)initialScrollCollectionView:(id)a0;
- (void)removeScroller;
- (void)scrollCollectionView:(id)a0 position:(long long)a1 offset:(double)a2 alignTo:(id)a3 smooth:(BOOL)a4 useScroller:(BOOL)a5 callback:(id /* block */)a6;
- (void)updateLastIndexPathWithValidLayoutAttributes:(id)a0;
- (void)updateWithInvalidationContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)collectionViewDidScroll:(id)a0;

@end
