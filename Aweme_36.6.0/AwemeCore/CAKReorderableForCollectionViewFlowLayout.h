@class UIView, UILongPressGestureRecognizer, CADisplayLink, NSString, UIPanGestureRecognizer, CAKPassTouchView, UITouch, UIImpactFeedbackGenerator, NSIndexPath;
@protocol CAKReorderableForCollectionViewDelegateFlowLayout, CAKReorderableForCollectionViewDataSource;

@interface CAKReorderableForCollectionViewFlowLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSIndexPath *selectedItemIndexPath;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) struct CGPoint { double x; double y; } currentViewCenter;
@property (nonatomic) struct CGPoint { double x; double y; } originalCellCenter;
@property (nonatomic) struct CGPoint { double x; double y; } panTranslationInCollectionView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UITouch *activeTouch;
@property (retain, nonatomic) UITouch *recentTouch;
@property (retain, nonatomic) CAKPassTouchView *passTouchView;
@property (readonly, weak, nonatomic) id<CAKReorderableForCollectionViewDataSource> dataSource;
@property (readonly, weak, nonatomic) id<CAKReorderableForCollectionViewDelegateFlowLayout> delegate;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL canInvalidateLayout;
@property (nonatomic) double scrollingSpeed;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollingTriggerEdgeInsets;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) BOOL oneDirectionOnly;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } draggableInset;
@property (nonatomic) double highlightedScale;
@property (nonatomic) BOOL hapticFeedbackEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidatesScrollTimer;
- (void)tearDownCollectionView;
- (void)handleApplicationWillResignActive:(id)a0;
- (void)hapticFeedback;
- (void)handleScroll:(id)a0;
- (struct CGPoint { double x0; double x1; })regulatedCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setupPassTouchViewWithTouch:(id)a0;
- (void)tearDownPassTouchView;
- (void)invalidateLayoutIfNecessary;
- (void)setupScrollTimerInDirection:(long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)setDefaults;
- (void)applyLayoutAttributes:(id)a0;
- (void)setupCollectionView;
- (void)handleLongPressGesture:(id)a0;
- (void)handlePanGesture:(id)a0;

@end
