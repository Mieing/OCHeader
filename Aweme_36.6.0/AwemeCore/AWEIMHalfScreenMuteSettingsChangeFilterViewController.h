@class NSString, UICollectionView, UILabel, AWEIMHalfScreenMuteSettingsViewModel, UIButton;

@interface AWEIMHalfScreenMuteSettingsChangeFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) AWEIMHalfScreenMuteSettingsViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *backBtn;
@property (nonatomic) BOOL didClickedConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)__setupUI;
- (void)__backBtnClicked;
- (void)__confirmBtnClicked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
