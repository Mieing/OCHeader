@class UIScrollView, DanceUIScrollViewDelegateProxy;

@interface DanceUIScrollViewDelegateHandler : NSObject {
    DanceUIScrollViewDelegateProxy *_delegateProxy;
}

@property (weak, nonatomic) UIScrollView *scrollView;

+ (id)handlerWithScrollView:(id)a0;

- (void)handleCollectionViewDelegateChange;
- (void)setDelegateWithMasterDelegate:(id)a0 slaveDelegates:(id)a1;
- (void)addSlaveDelegate:(id)a0;
- (void)removeSlaveDelegate:(id)a0;
- (void)__scrollViewDelegateDidChanged:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
