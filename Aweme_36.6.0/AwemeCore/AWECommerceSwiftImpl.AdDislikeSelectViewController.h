@interface AWECommerceSwiftImpl.AdDislikeSelectViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DUXSheetDelegate> {
    void /* unknown type, empty encoding */ sheetView;
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ sectionArray;
    void /* unknown type, empty encoding */ isLongPress;
    void /* unknown type, empty encoding */ selectedItems;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipIconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tipLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitButton;
}

- (void)sheetWillDismiss:(id)a0;
- (void)submitButtonClicked;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)closeButtonTapped;

@end
