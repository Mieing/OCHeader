@interface IESIMGroupImpl.GroupSetAdminUIViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, NSObject> {
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ dataController;
    void /* unknown type, empty encoding */ navbarType;
    void /* unknown type, empty encoding */ schemaLink;
    void /* unknown type, empty encoding */ enterFrom;
    void /* unknown type, empty encoding */ shouldUseWebcastProfile;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionview;
    void /* unknown type, empty encoding */ $__lazy_storage_$_noticeVerticalStackView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)updateBackgroundColorAfterAppUserInterfaceStyleDidChanged;
- (void).cxx_destruct;
- (void)leave;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)loadView;

@end
