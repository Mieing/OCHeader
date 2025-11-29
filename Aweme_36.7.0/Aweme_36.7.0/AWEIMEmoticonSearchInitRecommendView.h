@class UILongPressGestureRecognizer, NSString, AWEIMEmoticonPreviewHelper, AWEIMEmoticonSearchHotWordHeaderView, NSDictionary, AWEIMEmoticonThemeModel, UICollectionView, NSMutableSet, AWEIMMessageConversation, AWEIMEmoticonSearchInitRecommendViewModel;
@protocol AWEIMEmoticonSearchInitRecommendViewDelegate;

@interface AWEIMEmoticonSearchInitRecommendView : UIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEIMEmoticonPreviewHelperDelegate>

@property (retain, nonatomic) AWEIMEmoticonSearchInitRecommendViewModel *viewModel;
@property (retain, nonatomic) AWEIMEmoticonPreviewHelper *previewHelper;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *fakeThemeModel;
@property (retain, nonatomic) UILongPressGestureRecognizer *previewLongPressGuesture;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSDictionary *dataSource;
@property (weak, nonatomic) AWEIMEmoticonSearchHotWordHeaderView *headerView;
@property (retain, nonatomic) NSMutableSet *didTrackIds;
@property (weak, nonatomic) id<AWEIMEmoticonSearchInitRecommendViewDelegate> delegate;
@property (weak, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewModelWithEmoticonModel:(id)a0;

- (void)trackShow;
- (void)p_setupData;
- (id)previewHelper:(id)a0 emotionModelAtIndexPath:(id)a1;
- (void)p_setupPreview;
- (void)p_trackVisibleCellsAndHeaderIfNeeded;
- (double)p_caculateItemSpacingWithItemWidth:(double)a0;
- (void)p_trackCellShowWithIndexPath:(id)a0;
- (id)p_trackParamsWithIndexPath:(id)a0 isClick:(BOOL)a1;
- (id)p_emoticonModelAtIndexPath:(id)a0;
- (void)p_trackCellClickWithIndexPath:(id)a0;
- (void)p_trackCellWithEvent:(id)a0 IndexPath:(id)a1 needCheck:(BOOL)a2;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)handleLongPressGesture:(id)a0;

@end
