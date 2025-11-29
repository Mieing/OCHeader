@class NSDictionary, NSString, AWEDoubleColumnSearchMerchandiseModel, UICollectionView, UILabel, NSTimer, NSIndexPath;
@protocol AWESearchECardTracker;

@interface AWESearchAdEcommerceBannerListCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, AWESearchCachalotCardViewProtocol, AWESearchMerchandiseDoubleColumnCell>

@property (retain, nonatomic) UILabel *adTagLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionView *titleCollectionView;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseModel *model;
@property (retain, nonatomic) NSTimer *autoScrollTimer;
@property (retain, nonatomic) NSIndexPath *currentSelectedIndexPath;
@property (retain, nonatomic) NSIndexPath *selecteToIndexPath;
@property (copy, nonatomic) NSDictionary *searchParams;
@property (retain, nonatomic) id<AWESearchECardTracker> searchTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)componentPageViewDidAppear:(BOOL)a0;
- (void)componentPageViewWillDisappear:(BOOL)a0;
- (void)trackAdShow;
- (void)configSearchTracker:(id)a0;
- (void)setSearchInfoDict:(id)a0;
- (void)recordDidEndDisplaying;
- (void)invalidateAutoScrollTimer;
- (void)setupKVO;
- (void)initalTitleCollectionViewCurrentSelectedIndexPath;
- (void)contentOffsetDidValueChange;
- (id)indexPathWithCollectionViewIndexPath:(id)a0;
- (void)updateTitleCollectionViewCurrentSelectedIndexPath:(id)a0;
- (void)addCornerRadiusWithView:(id)a0 corners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
- (id)modelWithRealIndexPath:(id)a0;
- (void)scheduledAutoScrollTimer;
- (BOOL)checkValidSelectedIndexPath:(id)a0;
- (void)autoScrollBannerWithTimer;
- (id)trackEcommerceCommonParamsWithNeedLogExtra:(BOOL)a0;
- (id)indexPathWithTitleCollectionViewIndexPath:(id)a0;
- (void)trackADEventWithLabel:(id)a0 refer:(id)a1 adExtraData:(id)a2;
- (long long)trackIndexWithCollectionViewIndexPath:(id)a0;
- (void)trackEcommerceUserEvent:(id)a0 refer:(id)a1;
- (void)didSelecteItemAtCollectionViewIndexPath:(id)a0;
- (void)didSelecteItemAtTitleCollectionViewIndexPath:(id)a0;
- (void)trackADEventWithLabel:(id)a0;
- (void)trackEcommerceUserEvent:(id)a0;
- (id)trackEcommerceCommonParams;
- (void)trackADEventWithLabel:(id)a0 refer:(id)a1;
- (void)configCollectionView;
- (void)configAdTagLabel;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetData;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)componentView;
- (void)setupSubviews;
- (void)updateWithViewModel:(id)a0;

@end
