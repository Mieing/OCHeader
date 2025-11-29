@class UILongPressGestureRecognizer, NSArray;

@interface IESECDraggableLynxUICollection : LynxUICollection

@property (nonatomic) BOOL lynxDragEnable;
@property (nonatomic) long long lynxDragTriggerDuration;
@property (retain, nonatomic) UILongPressGestureRecognizer *lynxDragGesture;
@property (retain, nonatomic) NSArray *lynxStoneIndexes;
@property (nonatomic) BOOL lynxDragOrientationHorizontal;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginDragFrame;

+ (void)registerECDraggableCollection;
+ (id)__lynx_prop_config__890;
+ (id)__lynx_prop_config__981;
+ (id)__lynx_prop_config__1072;
+ (id)__lynx_prop_config__1173;

- (void)setSign:(long long)a0;
- (void)handleLongGesture:(id)a0;
- (void)setLynxStoneIndexes:(id)a0 requestReset:(BOOL)a1;
- (void)setLynxDragOrientationHorizontal:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setLynxDragEnable:(BOOL)a0 requestReset:(BOOL)a1;
- (void)setLynxDragTriggerDuration:(long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 targetIndexPathForMoveFromItemAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;
- (id)collectionView:(id)a0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)a1 atCurrentIndexPath:(id)a2 toProposedIndexPath:(id)a3;
- (id)createView;

@end
