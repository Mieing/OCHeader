@interface IESIMGroupImpl.GroupShareSettingViewController : UIViewController <IESIMCustomModalTransitionVCProtocol, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ conversation;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataArray;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ handelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (void)viewControllerDidDismissByAction:(long long)a0;
- (double)customCornerRadius;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
