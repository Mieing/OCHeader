@interface IESIMGroupImpl.ChatSettingsCheckViewController : UIViewController <IESIMCustomModalTransitionVCProtocol, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ pullIndicatorView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ isLoading;
}

@property (nonatomic, weak) void /* function */ transitionContext;

- (BOOL)enablePullDismissGestureForPresentation;
- (BOOL)disablePullIndicatorView;
- (BOOL)disablePreferredContentSizeBelongToAutoLayout;
- (double)customCornerRadius;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
