@protocol UIViewControllerTransitioningDelegate;

@interface FlowVoiceCall.VoiceCallScenePanelViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ actionDelegate;
    void /* unknown type, empty encoding */ themeStyle;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$__transitionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualEffectView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_indicatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
}

@property (nonatomic) long long modalPresentationStyle;
@property (nonatomic, retain) id<UIViewControllerTransitioningDelegate> transitioningDelegate;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
