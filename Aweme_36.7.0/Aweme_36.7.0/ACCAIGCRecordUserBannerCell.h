@class ACCAIGCLoraPersonInfo, UIView, NSString, ACCAIGCLoraProfileModel, ACCAIGCManagerLoraInfoViewController, ACCAIGCLoraHelper, NSMutableArray, NSMutableSet, UICollectionView, UILabel;

@interface ACCAIGCRecordUserBannerCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, ACCAIGCMoreLoraInfoCollectionViewCellDelegate, ACCAIGCFullPreviewLoraCoverControllerDelegate>

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) ACCAIGCManagerLoraInfoViewController *loraViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) ACCAIGCLoraHelper *loraHelper;
@property (retain, nonatomic) ACCAIGCLoraProfileModel *profileModel;
@property (nonatomic) BOOL loraInfoIsMaxCount;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *currentSelectPersonInfo;
@property (nonatomic) BOOL refreshWhenExitFlag;
@property (retain, nonatomic) NSMutableSet *trackLoraIdList;
@property (nonatomic) BOOL operationRunning;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL enableAIGCUGCFusionEntrance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)updateUILayout;
- (void)sendClickAigcRoleManagerPageWith:(id)a0;
- (BOOL)shouldUseLightModeUI;
- (void)clickDeleteLoraInfoInFullCover:(id)a0;
- (void)clickSwitchLoraInfoInFullCover:(id)a0;
- (void)trackShowAIGCRoleManagePage;
- (void)createLoraDataModel:(long long)a0 enterScene:(long long)a1;
- (void)refreshLoraData;
- (void)updateLoraInfo;
- (void)clearSelectLoraInfo:(id)a0;
- (void)onCreateLoraInfoAction;
- (void)appendCreateLoraIfNeed;
- (void)clickDeleteLoraInfo:(id)a0;
- (void)clickSwitchLoraInfo:(id)a0;
- (void)clickFullPreviewCover:(id)a0;
- (void)clickFullPreviewCoverWithBuildingLora:(id)a0;
- (void)clickAddLora:(id)a0;
- (void)clickRetryLoraInfo:(id)a0;
- (id)_controllerForView:(id)a0;
- (void)trackAddLora;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
