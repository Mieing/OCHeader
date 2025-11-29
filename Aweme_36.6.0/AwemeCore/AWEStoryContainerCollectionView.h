@class NSString;
@protocol AWEStoryContainerHitPassThroughProtocol;

@interface AWEStoryContainerCollectionView : UICollectionView <AWEStoryContainerCollectionViewProtocol>

@property (nonatomic) BOOL enableEnterProfile;
@property (nonatomic) BOOL enableGesturePanEdge;
@property (nonatomic) BOOL enableGestureBeginAlways;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gesturePanEdge;
@property (nonatomic) BOOL enableEdgePanWhenBounce;
@property (weak, nonatomic) id<AWEStoryContainerHitPassThroughProtocol> throughDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)edgePan:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
