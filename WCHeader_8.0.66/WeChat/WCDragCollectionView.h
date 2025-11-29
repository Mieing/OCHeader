@class NSIndexPath, UIView;
@protocol WCCollectionViewDataSource, WCCollectViewReorderDragDelegate;

@interface WCDragCollectionView : UICollectionView

@property (retain, nonatomic) NSIndexPath *originalIndexPath;
@property (retain, nonatomic) NSIndexPath *moveIndexPath;
@property (weak, nonatomic) UIView *tempMoveCell;
@property (nonatomic) float distGuesLocationWithCellCenterX;
@property (nonatomic) float distGuesLocationWithCellCenterY;
@property (weak, nonatomic) id<WCCollectionViewDataSource> xd_dataSource;
@property (weak, nonatomic) id<WCCollectViewReorderDragDelegate> xd_dragDelegate;

- (BOOL)checkCanMoveItemAtIndexPath:(id)a0;
- (BOOL)xd_beginInteractiveMovementForItemAtIndexPath:(id)a0 gestureLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)xd_updateInteractiveMovementTargetPosition:(struct CGPoint { double x0; double x1; })a0 gesture:(id)a1;
- (void)xd_endInteractiveMovement;
- (void)xd_cancelInteractiveMovement;
- (void)xd_moveCell;
- (void).cxx_destruct;

@end
