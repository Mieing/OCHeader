@class NSString, DUXContentSheet, ACCAIGCMultiLoraSelectViewControllerConfig, ACCAIGCLoraProfileModel, NSMutableDictionary, ACCAIGCMultiLoraActionButton, NSMutableArray, UICollectionView, DUXLoadingToast, UILabel, NSMutableSet;

@interface ACCAIGCMultiLoraSelectViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, ACCAIGCMultiLoraInfoCollectionViewCellDelegate>

@property (retain, nonatomic) ACCAIGCMultiLoraSelectViewControllerConfig *config;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) NSMutableDictionary *currentSelectedDict;
@property (retain, nonatomic) NSMutableArray *currentSelectedArray;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCAIGCMultiLoraActionButton *actionButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL enableSingleSelect;
@property (nonatomic) long long lastSheetLines;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL shouldCheckAddedLoraProfile;
@property (retain, nonatomic) NSMutableSet *lastLoraList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentVCWithConfig:(id)a0;

- (void)dismissLoading;
- (void)trackPageShow;
- (id)dux_titleForColoseButton;
- (void)actionButtonClicked;
- (void)updateActionButtonStatus;
- (void)refreshLoraData;
- (void)clickCell:(id)a0;
- (void)configSingleSelect:(BOOL)a0;
- (void)checkAddedLoraProfileIfNeeded;
- (void)refreshLoraDataForceAnimate:(id)a0;
- (void)enableGreyMode:(BOOL)a0;
- (double)sheetHeightForLines:(unsigned long long)a0;
- (void)trackRoleChooseFinishWithLoraInfoArray:(id)a0;
- (BOOL)doSelectWithModel:(id)a0 needToast:(BOOL)a1;
- (void)trackRoleChooseWithLoraInfo:(id)a0;
- (void)createNewLora;
- (void).cxx_destruct;
- (void)deselectAll;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (double)cellSize;
- (void)showLoading;

@end
