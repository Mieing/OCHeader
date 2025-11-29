@interface IESIMConversationSwiftImpl.IESIMMultiTopFloatingTipsContainerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ displayState;
    void /* unknown type, empty encoding */ dirtyCellViewModels;
    void /* unknown type, empty encoding */ floatTipsDelegate;
    void /* unknown type, empty encoding */ isDirtyWhenFoldingOrExpanding;
    void /* unknown type, empty encoding */ $__lazy_storage_$_IESIMMultiTopFloatingTipsCollectionView;
    void /* unknown type, empty encoding */ vcHeight;
    void /* unknown type, empty encoding */ isPadSplit;
    void /* unknown type, empty encoding */ cellViewModels;
    void /* unknown type, empty encoding */ topFloatingTipsTracker;
    void /* unknown type, empty encoding */ $__lazy_storage_$_maskView;
    void /* unknown type, empty encoding */ hasBeenShownUniqueIds;
}

@property (nonatomic) double collectionViewHeight;

- (void)didClickMaskView;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
