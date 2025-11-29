@class MMUIViewController, StoreEmotionHomePageLogic, NSArray, UICollectionViewFlowLayout, StoreEmoticonTopicProxyLogic, NSString, UICollectionView, EmojiInfoObj;

@interface StoreEmotionHomePageViewController : MMUIViewController <EmoticonHalfScreenSendViewDelegate, MMStoreEmotionAllCellDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) MMUIViewController *contentViewController;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) StoreEmotionHomePageLogic *homePageLogic;
@property (retain, nonatomic) NSArray *recordList;
@property (retain, nonatomic) EmojiInfoObj *operatingEmojiInfoObj;
@property (nonatomic) int operatingEmojiScene;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) BOOL hitExpt;
@property (retain, nonatomic) StoreEmoticonTopicProxyLogic *topicVCPorxy;
@property (copy, nonatomic) NSString *reqId;
@property (nonatomic) unsigned long long searchScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEmotionScene:(unsigned int)a0 AndParentViewController:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)initData;
- (void)clearSearchDisplayController;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (double)contentWidth;
- (void)jumpToBannerSet:(id)a0 entrance:(int)a1;
- (void)reportStoreEmotionAndEmojiExpose;
- (void)reportEmojiCollectionExposeWithRecommendInfo:(id)a0 entrance:(int)a1;
- (void)onStoreEmotionAllCellTapButton:(id)a0;
- (void).cxx_destruct;

@end
