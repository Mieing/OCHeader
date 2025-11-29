@interface IESIMGroupImpl.CreateOpenGroupViewController : AWEIMComponentViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, NSObject, AWEIMComponentManagerDependency> {
    void /* unknown type, empty encoding */ isFirstCreateButtonEnable;
    void /* unknown type, empty encoding */ currentKeyboardInfo;
    void /* unknown type, empty encoding */ navigationBar;
    void /* unknown type, empty encoding */ floatingArea;
    void /* unknown type, empty encoding */ hintLabelLinkRange;
    void /* unknown type, empty encoding */ hintLabel;
    void /* unknown type, empty encoding */ confirmButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_configCenter;
    void /* unknown type, empty encoding */ $__lazy_storage_$_baseConfig;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mainConfig;
    void /* unknown type, empty encoding */ limitModel;
    void /* unknown type, empty encoding */ headerModel;
    void /* unknown type, empty encoding */ itemModels;
    void /* unknown type, empty encoding */ hasScrollToGroupNameOnce;
    void /* unknown type, empty encoding */ isPreload;
    void /* unknown type, empty encoding */ initDateForTiming;
    void /* unknown type, empty encoding */ hasTrackedCreateGroupPageShow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGesture;
    void /* unknown type, empty encoding */ groupCreationResult;
}

- (void)keyboardWillAppearWithNotification:(id)a0;
- (void)handleGestureWithGes:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)keyboardDidHideWithNotification:(id)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)handleConfirmButtonTappedWhenDisable:(id)a0;
- (void)confirmButtonClicked:(id)a0;
- (void)hintLabelTapped:(id)a0;
- (void)backButtonClickedWithSender:(id)a0;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)keyboardWillHideWithNotification:(id)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;

@end
