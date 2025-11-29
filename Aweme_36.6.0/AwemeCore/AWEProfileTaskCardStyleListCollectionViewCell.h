@class NSString, NSArray, UICollectionView, NSMutableSet, AWEProfileContext, AWEUserModel, AWEProfileVacantController;

@interface AWEProfileTaskCardStyleListCollectionViewCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, AWEUserMessage, AWEProfileVacantDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSArray *dataArray;
@property (retain, nonatomic) NSMutableSet *trackTypeSet;
@property (weak, nonatomic) AWEProfileContext *context;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL shouldHideEmptyView;
@property (nonatomic) BOOL taskCardFirstShowReloaded;
@property (nonatomic) BOOL isFirstTrackShowed;
@property (retain, nonatomic) AWEProfileVacantController *vacantController;
@property (nonatomic) double lastWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadBizUIAdapterClass;
+ (id)identifier;
+ (double)viewHeight;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (id)aAWEPadBizUIAdapter;
- (id)profileVacantContainerView:(unsigned long long)a0;
- (void)profileVacantConfig:(id)a0 state:(unsigned long long)a1;
- (void)configWithUserModel:(id)a0 context:(id)a1 shouldHideEmptyView:(BOOL)a2;
- (void)masUpdateMarginTop:(double)a0;
- (id)configTrackerInfoWithSchema:(id)a0 publishGuideTip:(id)a1;
- (id)parseToMutableDict:(id)a0;
- (void)configDataArrayWithUserModel:(id)a0;
- (void)trackPublishGuideIfNeed:(BOOL)a0 postion:(id)a1 schema:(id)a2;
- (void)configGontributionGuideTipsExposureLogic;
- (void)trackHomepageTaskCardClick:(id)a0;
- (void)openJumpURL:(id)a0 postion:(id)a1;
- (id)publishGuideTrackParams;
- (BOOL)shouldShowPublishGuide;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
