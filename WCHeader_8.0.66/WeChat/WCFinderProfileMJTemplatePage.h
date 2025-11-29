@class WCFinderAnimationLoadingView, NSMutableDictionary, WCFinderStreamFooterView, NSString, UILabel;

@interface WCFinderProfileMJTemplatePage : WCFinderStreamProfileViewPage <UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileMJTempPageModelDelegate>

@property (retain, nonatomic) WCFinderStreamFooterView *footerView;
@property (retain, nonatomic) UILabel *statusTips;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) NSMutableDictionary *exposedTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadView;
- (void)viewDidLoad;
- (void)viewWillApear;
- (void)viewWillDisappear;
- (void)onMJTempDataAppendFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)onMJTempModelFetchStateChanged:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (unsigned long long)collectionView:(id)a0 layout:(id)a1 columnCountAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 cellEdgeInsetAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 cellHeightAtIndexPath:(id)a2 withWidth:(double)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 cellSpaceAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 headerHeightAtSection:(unsigned long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 footerHeightAtSection:(unsigned long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 headerEdgeInsetAtSection:(unsigned long long)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)exposeItemExposeIndexPath:(id)a0 cell:(id)a1;
- (void)exposeWhenDisAppear;
- (void)recordStartExposeTimeWhenAppear;
- (id)reportUdfKVForItem:(id)a0;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (void)didClickStreamFooterPostFromSnsAction:(id)a0;
- (void)updateStatus;
- (void)setupLoadingView:(BOOL)a0;
- (void)setupStatusTipsView:(id)a0;
- (void)_layoutStatuViews;
- (id)displayStatusTips;
- (void)clickRetry;
- (void).cxx_destruct;

@end
