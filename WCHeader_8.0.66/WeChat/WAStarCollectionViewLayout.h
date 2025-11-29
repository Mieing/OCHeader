@class UIPanGestureRecognizer, UITapGestureRecognizer, CADisplayLink, NSString, UIView, NSIndexPath, UILongPressGestureRecognizer;
@protocol WAStarCollectionViewLayoutDataSource, WAStarCollectinViewViewLayoutDelegate, WAStarCollectionViewLayoutDelegate;

@interface WAStarCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSIndexPath *dragBeginItemIndexPath;
@property (retain, nonatomic) NSIndexPath *selectedItemIndexPath;
@property (retain, nonatomic) NSIndexPath *currentViewIndexPath;
@property (retain, nonatomic) NSIndexPath *dragAddedFakeIndexPath;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) struct CGPoint { double x; double y; } currentViewCenter;
@property (retain, nonatomic) UIView *scaleView;
@property (nonatomic) struct CGPoint { double x; double y; } panTranslationInCollectionView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL isDragInDeleteArea;
@property (nonatomic) long long dragButtonEventType;
@property (nonatomic) unsigned long long dragType;
@property (nonatomic) BOOL copyMoved;
@property (readonly, nonatomic) id<WAStarCollectionViewLayoutDataSource> dataSource;
@property (readonly, nonatomic) id<WAStarCollectinViewViewLayoutDelegate> delegate;
@property (weak, nonatomic) id<WAStarCollectionViewLayoutDelegate> layoutDelegate;
@property (nonatomic) double scrollingSpeed;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollingTriggerEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollingExtendedEdgeInsets;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) UIView *moveContainerView;
@property (nonatomic) double extraBottomSpace;
@property (nonatomic) double dragReplaceDuration;
@property (nonatomic) double itemTransform;
@property (nonatomic) BOOL disableEdgeScroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)contentHeight:(unsigned long long)a0;

- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)setGridDefaults;
- (void)setupCollectionView;
- (void)tearDownCollectionView;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (id)getCurrentViewIndexPath;
- (void)invalidateLayoutIfNecessary;
- (void)invalidatesScrollTimer;
- (void)setupScrollUp;
- (void)setupScrollDown;
- (void)setupScrollTimerInDirection:(long long)a0;
- (void)handleScroll:(id)a0;
- (void)handleLongPressGesture:(id)a0;
- (void)animateScaleViewBackToPosition:(id)a0;
- (void)handlePanGesture:(id)a0;
- (void)handleTapGesture:(id)a0;
- (void)releaseCurrentView;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)handleApplicationWillResignActive:(id)a0;
- (void)setUpGestureRecognizersOnCollectionView;
- (void).cxx_destruct;

@end
