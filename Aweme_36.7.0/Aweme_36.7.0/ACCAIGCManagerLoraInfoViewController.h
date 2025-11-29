@class ACCAIGCLoraPersonInfo, NSMutableSet, NSString, ACCAIGCLoraProfileModel, ACCAIGCLoraHelper, NSDictionary, NSMutableArray, ACCAIGCManagerLoraEmptyView, UICollectionView, UILabel, ACCAnimatedButton;

@interface ACCAIGCManagerLoraInfoViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, ACCAIGCMoreLoraInfoCollectionViewCellDelegate>

@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) ACCAnimatedButton *backUpButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) ACCAIGCLoraHelper *loraHelper;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (retain, nonatomic) ACCAIGCManagerLoraEmptyView *emptyView;
@property (nonatomic) BOOL loraInfoIsMaxCount;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *currentSelectPersonInfo;
@property (nonatomic) BOOL refreshWhenExitFlag;
@property (retain, nonatomic) NSMutableSet *trackLoraIdList;
@property (nonatomic) BOOL operationRunning;
@property (nonatomic) long long darkMode;
@property (nonatomic) long long enterScene;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUILayout;
- (void)sendClickAigcRoleManagerPageWith:(id)a0;
- (void)tapBackUpButton;
- (void)createLoraDataModel:(long long)a0 enterScene:(long long)a1;
- (void)refreshLoraData;
- (void)sendManagerLoraShow:(long long)a0;
- (void)updateLoraInfo;
- (void)sendRoleCellShowWith:(id)a0 index:(long long)a1 defaultLora:(BOOL)a2;
- (void)sendManagerLoraMonitor:(id)a0 success:(BOOL)a1 error:(id)a2 duration:(double)a3 loraIdList:(id)a4;
- (void)clearSelectLoraInfo:(id)a0;
- (void)onCreateLoraInfoAction;
- (id)generalEnterFrom;
- (void)appendCreateLoraIfNeed;
- (void)clickDeleteLoraInfo:(id)a0;
- (void)clickSwitchLoraInfo:(id)a0;
- (void)clickFullPreviewCover:(id)a0;
- (void)clickAddLora:(id)a0;
- (void)clickRetryLoraInfo:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupUI;

@end
