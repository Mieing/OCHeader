@class NSData, NSString, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderStreamFooterView, UICollectionViewDiffableDataSource, NSMutableArray, UICollectionView, UILabel;

@interface WCFinderCommentHeatUpContactListController : WCFinderCustomPanelSheet <WCFinderStreamFooterViewActionDelegate, UICollectionViewDelegate>

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
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPromotionInfo:(id)a0 tid:(id)a1;
- (void)viewDidLoad;
- (void)updateTitleWithCount:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInset;
- (id)loadContentView;
- (id)snapShot;
- (void)resetDetailToInitStatusWithRetry:(unsigned long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)fetchData;
- (id)transFormFromHelps:(id)a0;
- (void)didClickStreamFooterRefresh:(id)a0;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)a0;
- (BOOL)canPrefetchData;
- (void)clickRetryAction;
- (void).cxx_destruct;

@end
