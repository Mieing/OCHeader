@class UIView, EmotionSetInfo, EmotionBannerSet, UICollectionViewFlowLayout, StoreEmotionGetEmotionListCgi, EmoticonLoadMoreFooterView, MMLoadMoreCollectionView, StoreEmotionAllListReportInfo, NSMutableArray, NSString, StoreEmotionPageShareLogic;

@interface StoreEmotionAllListViewController : MMUIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMLoadMoreCollectionViewDelegate, StoreEmotionGetEmotionListCgiDelegate, StoreEmotionPageShareLogicDelegate>

@property (retain, nonatomic) EmotionBannerSet *bannerSet;
@property (nonatomic) int extranceScene;
@property (retain, nonatomic) MMLoadMoreCollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (retain, nonatomic) EmoticonLoadMoreFooterView *loadingFooterView;
@property (retain, nonatomic) StoreEmotionGetEmotionListCgi *getEmotionListCgi;
@property (retain, nonatomic) NSMutableArray *storeItems;
@property (retain, nonatomic) EmotionSetInfo *emotionSetInfo;
@property (retain, nonatomic) StoreEmotionPageShareLogic *shareLogic;
@property (retain, nonatomic) UIView *loadingView;
@property (nonatomic) unsigned long long forwardCount;
@property (retain, nonatomic) StoreEmotionAllListReportInfo *reportInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBannerSet:(id)a0 extrance:(int)a1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (int)pageScene;
- (void)initViews;
- (void)initData;
- (void)setupRightBarButton;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)onLoadMore;
- (void)onLoadDone;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)onGetEmotionListFinishedWithReqType:(unsigned int)a0 Response:(id)a1;
- (void)onOperate:(id)a0;
- (void).cxx_destruct;

@end
