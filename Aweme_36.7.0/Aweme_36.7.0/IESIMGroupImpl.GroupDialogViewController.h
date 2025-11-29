@interface IESIMGroupImpl.GroupDialogViewController : UIViewController <IESIMCustomModalTransitionVCProtocol, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ handelView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (BOOL)disablePreferredContentSizeBelongToAutoLayout;
- (double)customCornerRadius;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
