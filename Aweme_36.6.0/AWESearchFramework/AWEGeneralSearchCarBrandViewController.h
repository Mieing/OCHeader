@class NSString, NSArray, AWEGeneralSearchModel, AWESearchAllHeaderFooterView, UIImageView, AWEGeneralSearchScrollTailView, UICollectionView, AWESearchCarBrandModel, UILabel;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralSearchCarBrandViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UILabel *contentSourceLabel;
@property (retain, nonatomic) UIImageView *iconImgView;
@property (retain, nonatomic) AWESearchAllHeaderFooterView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSArray *carList;
@property (retain, nonatomic) AWESearchCarBrandModel *carBrandModel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) AWEGeneralSearchScrollTailView *footerView;
@property (nonatomic) BOOL isTransfering;
@property (retain, nonatomic) NSString *refString;
@property (retain, nonatomic) NSString *keyWord;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (BOOL)enableCardBrandNewStyle;
+ (double)totoalHeight;
+ (double)collectionViewDynamicHeight;
+ (void)__awe__codeRunnerRun_67;
+ (double)contentViewHeight;

- (void)configUI;
- (void)resetContext:(id)a0;
- (void)updateWithReferString:(id)a0;
- (void)trackSearchResultShowEvent;
- (void)trackFeedbackViewShowkEvent;
- (long long)displayCarListCount;
- (void)enterCarBrandH5Page;
- (void)enterCarSeriesH5Page:(id)a0;
- (double)collectionCellTopPadding;
- (double)collectionCellBottomPadding;
- (void)trackFeedbackViewClickNewEvent;
- (void)trackSearchResultClickEvent;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)headerHeight;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)updateWithModel:(id)a0;
- (id)fetchContext;
- (double)collectionViewHeight;

@end
