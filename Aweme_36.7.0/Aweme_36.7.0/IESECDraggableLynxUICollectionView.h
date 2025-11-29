@class LynxListScrollEventEmitter;

@interface IESECDraggableLynxUICollectionView : UICollectionView

@property (nonatomic) BOOL isLynxDragging;
@property (retain, nonatomic) LynxListScrollEventEmitter *scrollEventEmitter;

- (void).cxx_destruct;
- (void)moveItemAtIndexPath:(id)a0 toIndexPath:(id)a1;

@end
