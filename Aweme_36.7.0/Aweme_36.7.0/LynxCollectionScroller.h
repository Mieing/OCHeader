@class NSIndexPath;
@protocol LynxCollectionScrollerHolderDelegate;

@interface LynxCollectionScroller : NSObject

@property (nonatomic) BOOL willScrollDown;
@property (nonatomic) BOOL willScrollToInvisibleRect;
@property (nonatomic) unsigned long long scrollPosition;
@property (nonatomic) double offset;
@property (nonatomic) BOOL sticky;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (copy, nonatomic) id /* block */ completion;
@property (weak, nonatomic) id<LynxCollectionScrollerHolderDelegate> delegate;
@property (nonatomic) BOOL horizontalLayout;

- (void)stopScroll;
- (void)collectionViewWillBeginDragging:(id)a0;
- (void)collectionViewDidEndScrollingAnimation:(id)a0;
- (id)initWithTargetIndexPath:(id)a0 scrollDown:(BOOL)a1 scrollToInvisibleRect:(BOOL)a2 scrollPosition:(unsigned long long)a3 offset:(double)a4 sticky:(BOOL)a5 delegate:(id)a6 completion:(id /* block */)a7;
- (void)collectionViewStartScroll:(id)a0 animated:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })targetContentOffset:(id)a0 indexPath:(id)a1 offset:(double)a2 sticky:(BOOL)a3 scrollPosition:(unsigned long long)a4;
- (void)collectionViewAdjustTargetContentOffsetAtNextRunloop:(id)a0;
- (void).cxx_destruct;
- (void)collectionViewDidScroll:(id)a0;

@end
