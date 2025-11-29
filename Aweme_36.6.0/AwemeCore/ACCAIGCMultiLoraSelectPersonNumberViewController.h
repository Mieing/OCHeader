@class UIButton, NSArray, UICollectionView, NSString, UILabel, ACCAIGCMultiLoraSelectPersonNumberVCConfig;

@interface ACCAIGCMultiLoraSelectPersonNumberViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) ACCAIGCMultiLoraSelectPersonNumberVCConfig *uiConfig;
@property (retain, nonatomic) NSArray *dataModels;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *nextButton;
@property (nonatomic) long long selectedPersonNumber;
@property (copy, nonatomic) id /* block */ didClickButtonBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentVCWithConfig:(id)a0 personNumbers:(id)a1 didClickButtonBlock:(id /* block */)a2;

- (void)updateCellModels:(id)a0;
- (void)didClickCloseButton:(id)a0;
- (void)updateUILayouts;
- (void)didClickNextButton:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupUI;

@end
