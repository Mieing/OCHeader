@interface AWENewScanImpl.QRCodeSwitchStyleViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ switchCompletion;
    void /* unknown type, empty encoding */ deleteCompletion;
    void /* unknown type, empty encoding */ qrCodeList;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ manageState;
    void /* unknown type, empty encoding */ didEnterCreateCode;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ leftNavButton;
    void /* unknown type, empty encoding */ rightNavButton;
    void /* unknown type, empty encoding */ footer;
    void /* unknown type, empty encoding */ loadingView;
}

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)managerQRcode;
- (void)finishManagerQRcode;
- (void)pop;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
