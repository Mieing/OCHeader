@interface FlowInstructionComponent.FlowFeatureWordsSheetViewController : FlowCommon.FlowBaseViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UISheetPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ didSelectFeatureBlock;
    void /* unknown type, empty encoding */ didDisselectFeatureBlock;
    void /* unknown type, empty encoding */ willDisplayTrackBlock;
    void /* unknown type, empty encoding */ didDismissBlock;
    void /* unknown type, empty encoding */ featureList;
    void /* unknown type, empty encoding */ selectedItems;
    void /* unknown type, empty encoding */ trackMap;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ button;
}

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
