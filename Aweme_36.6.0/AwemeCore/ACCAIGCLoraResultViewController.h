@class UIView, NSString, ACCAnimatedButton, AWEVideoPublishViewModel, NSArray, NSMutableDictionary, UICollectionView, UILabel, DUXAlertDialog;

@interface ACCAIGCLoraResultViewController : AWEHalfScreenSuperViewController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) ACCAnimatedButton *backButton;
@property (retain, nonatomic) UILabel *navigationLabel;
@property (retain, nonatomic) UILabel *updateLable;
@property (retain, nonatomic) UILabel *hitLable;
@property (retain, nonatomic) UICollectionView *resultCollectionView;
@property (nonatomic) double cellWidth;
@property (retain, nonatomic) ACCAnimatedButton *creatButton;
@property (nonatomic) long long minCount;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) DUXAlertDialog *alertRetainlogView;
@property (nonatomic) BOOL markEnterAbum;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *btnHint;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSArray *originImageFilePath;
@property (copy, nonatomic) NSArray *checkImageResultList;
@property (copy, nonatomic) NSArray *invalidImageResultList;
@property (copy, nonatomic) id /* block */ dissmissCallBack;
@property (copy, nonatomic) id /* block */ delResultBlock;
@property (retain, nonatomic) NSMutableDictionary *trackInfo;
@property (copy, nonatomic) NSString *bottomButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)loraEnableOptimize;

- (void)setUI;
- (void)bindService;
- (void)setConfirmLawForCurrentUser;
- (void)updateResultStatus;
- (void)updateCenterViewByCollectionHeight;
- (void)scrollPositionBottom;
- (double)calculateLabelHeightWithLabel:(id)a0;
- (void)updateOptimizeViews;
- (void)deletePreloadPicture:(id)a0;
- (void)updateWithCell:(id)a0 row:(long long)a1;
- (void)p_backClicked:(id)a0;
- (void)p_creatClicked:(id)a0;
- (void)tapLawAlertConfirmButton;
- (void)tapLawAlertRejectButton;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)updateUI;
- (void)deleteIndexPath:(long long)a0;

@end
