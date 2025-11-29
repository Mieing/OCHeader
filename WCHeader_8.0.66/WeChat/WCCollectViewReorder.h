@class UILongPressGestureRecognizer;

@interface WCCollectViewReorder : NSObject {
    UILongPressGestureRecognizer *_moveGesture;
    id /* block */ _moveGestureStateChangeBlocks;
}

- (id)init;
- (void)bindToCollectionView:(id)a0;
- (void)moveGestureAction:(id)a0;
- (void).cxx_destruct;

@end
