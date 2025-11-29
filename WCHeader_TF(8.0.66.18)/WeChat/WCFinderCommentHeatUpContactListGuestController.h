@class NSData, NSString, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderStreamFooterView, UIView, UICollectionViewDiffableDataSource, NSMutableArray, UICollectionView, UILabel;

@interface WCFinderCommentHeatUpContactListGuestController : WCFinderCustomPanelSheet <WCFinderStreamFooterViewActionDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffSource;
@property (retain, nonatomic) WCFinderStreamFooterView *footerView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UILabel *stateTipsLabel;
@property (retain, nonatomic) UITapGestureRecognizer *stateRetryGesture;
@property (retain, nonatomic) NSMutableArray *heatUpCellViewModels;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *tid;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) BOOL isFetchingData;
@property (nonatomic) BOOL hasFetchData;
@property (retain, nonatomic) UILabel *heatUpCountLabel;
@property (weak, nonatomic) UIView *collectionViewBottomView;
@property (nonatomic) unsigned long long heatUpCount;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPromotionInfo:(id)a0 tid:(id)a1;
- (void)viewDidLoad;
- (void)updateTitle;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)loadContentView;
- (id)snapShot;
- (void)resetDetailToInitStatusWithRetry:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)fetchData;
- (id)transFormFromHelps:(id)a0;
- (void)changeCommentPromotionPublicFlag:(BOOL)a0;
- (void)changeCommentPromotionPublicFlag:(BOOL)a0 switchView:(id)a1;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (BOOL)canPrefetchData;
- (void)clickRetryAction;
- (id)sectionIdentityForIndexPath:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (BOOL)hideMaskBackGroundView;
- (void).cxx_destruct;

@end
