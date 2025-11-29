@class NSString, NSDictionary, UICollectionView, AWECouponDetailModel, AWECardCouponDetailStatusCollectionViewCell, NSArray;
@protocol AWELiveFloatOnTopManagerProtocol;

@interface AWECardCouponDetailViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (copy, nonatomic) NSString *couponID;
@property (copy, nonatomic) NSString *codeID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL liveWindow;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECouponDetailModel *couponDetailModel;
@property (weak, nonatomic) AWECardCouponDetailStatusCollectionViewCell *detailCell;
@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) id<AWELiveFloatOnTopManagerProtocol> liveManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserCenterModuleServiceCommonAdapterClass;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (id)aAWEUserCenterModuleServiceCommonAdapter;
- (void)_loadActions;
- (void)handleCouponValidate:(id)a0;
- (BOOL)isMultipleCoupon;
- (BOOL)p_couponRatingAvailable;
- (void)_refreshData;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_reloadView;
- (void)_setupUI;

@end
