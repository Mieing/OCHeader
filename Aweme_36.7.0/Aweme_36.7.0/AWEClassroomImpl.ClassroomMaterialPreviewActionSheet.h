@interface AWEClassroomImpl.ClassroomMaterialPreviewActionSheet : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ actions;
    void /* unknown type, empty encoding */ filePath;
    void /* unknown type, empty encoding */ downloadUrl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_divider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
}

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)cancelButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
