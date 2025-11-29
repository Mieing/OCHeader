@interface DanceUI.CollectionViewDragAndDropController : NSObject <UICollectionViewDragDelegate, UICollectionViewDropDelegate> {
    void /* unknown type, empty encoding */ ignoreUpdate;
    void /* unknown type, empty encoding */ dispatchEventCountWhenUpdating;
    void /* unknown type, empty encoding */ didAppliedDataAction;
    void /* unknown type, empty encoding */ dragAndDropContext;
    void /* unknown type, empty encoding */ collectionViewDragAndDropEventsStorage;
}

- (id)collectionView:(id)a0 itemsForBeginningDragSession:(id)a1 atIndexPath:(id)a2;
- (void)collectionView:(id)a0 dropSessionDidEnter:(id)a1;
- (void)collectionView:(id)a0 dragSessionWillBegin:(id)a1;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 dropSessionDidEnd:(id)a1;
- (void)collectionView:(id)a0 dragSessionDidEnd:(id)a1;
- (void)collectionView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)init;
- (id)collectionView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;

@end
