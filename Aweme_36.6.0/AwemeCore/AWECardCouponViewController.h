@class AWECardCouponWriteOffAlertView, NSString, AWERxProperty, AWECardCouponFoldListCollectionViewCell, UICollectionView, NSMutableArray, AWECardCouponListDataController, AWECardCouponVCEmptyView;

@interface AWECardCouponViewController : UIViewController <AWERouterViewControllerProtocol, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AWECardCouponCollectionFooterViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWECardCouponListDataController *dataController;
@property (nonatomic) BOOL checkHasRedeemed;
@property (retain, nonatomic) NSMutableArray *showCouponEvents;
@property (copy, nonatomic) NSString *lastClickedCouponCodeID;
@property (weak, nonatomic) AWECardCouponFoldListCollectionViewCell *targetCell;
@property (retain, nonatomic) AWERxProperty *showInvalidCardEntry;
@property (retain, nonatomic) AWERxProperty *showEmptyView;
@property (nonatomic) unsigned long long filterStatus;
@property (retain, nonatomic) AWECardCouponVCEmptyView *emptyView;
@property (retain, nonatomic) AWECardCouponWriteOffAlertView *alertView;
@property (nonatomic) BOOL enableGroupBuy;
@property (nonatomic) BOOL hasCommerceEntry;
@property (retain, nonatomic) NSMutableArray *sectionFoldFlagArray;
@property (retain, nonatomic) NSMutableArray *realDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)_endRefreshing;
- (void)backBtnClicked:(id)a0;
- (id)p_enterMethod;
- (void)clickFoldButtonInFooterView:(id)a0;
- (void)handleCouponValidate:(id)a0;
- (void)requestWriteOffEntryRight;
- (void)handleCouponDelete:(id)a0;
- (void)p_gotoInvalidCouponVC;
- (void)addCommerceEntry;
- (void)goToRedeemed;
- (void)classifyAndSortDatasource;
- (void)deleteCouponWithCouponId:(id)a0 merchantId:(id)a1;
- (void)p_gotoCouponDetailVCLocalSchemaWithModel:(id)a0;
- (void)p_gotoCouponDetailVCServerSchemaWithModel:(id)a0;
- (id)p_pageName;
- (void)sortedInsertForValidCoupon:(id)a0 toArray:(id)a1;
- (void)sortedInsertForInValidCoupon:(id)a0 toArray:(id)a1;
- (void)_loadMoreData;
- (void)_refreshData;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_setupUI;

@end
