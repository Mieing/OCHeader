@interface DanceUI.ScrollViewHelper : NSObject <UIScrollViewDelegate, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ scrollViewEvents;
    void /* unknown type, empty encoding */ lastDidScrollEventContext;
    void /* unknown type, empty encoding */ lastWillBeginDraggingEventContext;
    void /* unknown type, empty encoding */ lastWillEndDraggingEventContext;
    void /* unknown type, empty encoding */ lastDidEndDraggingEventContext;
    void /* unknown type, empty encoding */ lastWillBeginDeceleratingEventContext;
    void /* unknown type, empty encoding */ lastDidEndDeceleratingEventContext;
    void /* unknown type, empty encoding */ lastDidEndScrollingAnimationEventContext;
    void /* unknown type, empty encoding */ lastDidScrollToTopEventContext;
    void /* unknown type, empty encoding */ ignoreUpdate;
    void /* unknown type, empty encoding */ dispatchEventCountWhenUpdating;
}

- (void)scrollViewDidScrollToTop:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (id)init;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
