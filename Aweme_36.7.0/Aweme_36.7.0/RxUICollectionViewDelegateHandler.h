@class RxCollectionViewDelegateProxy, UICollectionView;
@protocol RxKeyValueObservation;

@interface RxUICollectionViewDelegateHandler : NSObject {
    id<RxKeyValueObservation> _collectionViewDelegateKVO;
    RxCollectionViewDelegateProxy *_delegateProxy;
}

@property (weak, nonatomic) UICollectionView *collectionView;

+ (id)handlerWithCollectionView:(id)a0;

- (void)__collectionViewDelegateDidChanged:(id)a0;
- (void)handleCollectionViewDelegateChange;
- (void)setDelegateWithMasterDelegate:(id)a0 slaveDelegates:(id)a1;
- (void)addSlaveDelegate:(id)a0;
- (void)removeSlaveDelegate:(id)a0;
- (void).cxx_destruct;

@end
