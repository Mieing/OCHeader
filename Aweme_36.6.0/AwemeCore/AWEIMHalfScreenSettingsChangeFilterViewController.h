@class NSString, UICollectionView, UILabel, UIButton;

@interface AWEIMHalfScreenSettingsChangeFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UICollectionView *filterCollectionView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL didClickedConfirm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmBtnClicked;
- (void)__backBtnClicked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
