@class NSString, CADisplayLink, UIView, NSIndexPath;

@interface WATaskBarCollectionViewLayout : UICollectionViewFlowLayout <UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSIndexPath *currentViewIndexPath;
@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) struct CGPoint { double x; double y; } currentViewCenter;
@property (retain, nonatomic) UIView *scaleView;
@property (nonatomic) struct CGPoint { double x; double y; } panTranslationInCollectionView;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) double scrollingSpeed;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollingTriggerEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } scrollingExtendedEdgeInsets;
@property (nonatomic) double extraBottomSpace;
@property (nonatomic) double dragReplaceDuration;
@property (nonatomic) double itemTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)setGridDefaults;
- (void)setupCollectionView;
- (void)tearDownCollectionView;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void)handleApplicationWillResignActive:(id)a0;
- (void)setUpGestureRecognizersOnCollectionView;
- (void).cxx_destruct;

@end
