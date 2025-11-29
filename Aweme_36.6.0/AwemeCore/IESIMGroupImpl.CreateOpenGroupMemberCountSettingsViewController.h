@interface IESIMGroupImpl.CreateOpenGroupMemberCountSettingsViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, AWEIMHalfScreenContainerVCDelegate> {
    void /* unknown type, empty encoding */ container;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ itemModels;
    void /* unknown type, empty encoding */ settingSelectedBlock;
    void /* unknown type, empty encoding */ vCDidDismissBlock;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ backButton;
    void /* unknown type, empty encoding */ collectionView;
}

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)didClickBackButton;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
