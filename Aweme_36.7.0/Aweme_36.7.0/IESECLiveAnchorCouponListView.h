@class IESECLiveRoomContext, NSString, IESECLiveApi, NSMutableDictionary, NSDictionary, IESECLiveAnchorBindedCouponsModel, IESECLiveAnchorAirView, IESECLiveStateView, UICollectionView, NSMutableArray;
@protocol IESECLiveAnchorCouponListViewOffLiveDelegate;

@interface IESECLiveAnchorCouponListView : IESECLiveAnchorNavigationBaseView <UICollectionViewDataSource, UICollectionViewDelegate, IESECLiveAnchorCouponCardDelegate, IESECLiveMessageSubscriber>

@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) IESECLiveStateView *stateView;
@property (retain, nonatomic) IESECLiveAnchorAirView *airView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IESECLiveApi *api;
@property (retain, nonatomic) IESECLiveAnchorBindedCouponsModel *model;
@property (retain, nonatomic) NSMutableArray *coupons;
@property (retain, nonatomic) NSMutableArray *grantingCouponIDArray;
@property (nonatomic) BOOL allowGrantingCoupon;
@property (copy, nonatomic) NSString *endCouponNotice;
@property (copy, nonatomic) NSString *endCouponToast;
@property (retain, nonatomic) NSMutableDictionary *couponTimes;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) BOOL requesting;
@property (nonatomic) BOOL isPushingChildView;
@property (readonly, nonatomic) BOOL withLiveContext;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSDictionary *params;
@property (weak, nonatomic) id<IESECLiveAnchorCouponListViewOffLiveDelegate> offLiveDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)loadMoreFooter;
- (void)grantCoupon:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomID:(id)a1 roomContext:(id)a2 shouldShowMaskView:(BOOL)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 roomID:(id)a1 roomContext:(id)a2;
- (void)fetchCouponList;
- (void)setupCouponListUI;
- (void)p_setupRightButton;
- (void)p_setupStateView;
- (BOOL)p_handleEmptyViewWithCoupons:(id)a0;
- (void)fetchCouponWithCompletion:(id /* block */)a0;
- (void)p_endGrantCouponWithModel:(id)a0;
- (void)p_performGrantCouponWithModel:(id)a0;
- (void)p_performOffLiveCouponGrantWithModel:(id)a0;
- (void)pushOnView:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)p_attendToBindCoupon;
- (void)p_handleGrantingExplainGuide:(id)a0 indexPath:(id)a1;
- (void)firstRightButtonFired:(id)a0;
- (void)secondRightButtonFired:(id)a0;
- (id)fakeCoupons;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)dealloc;
- (void)messageReceived:(id)a0;
- (void)loadData:(BOOL)a0;

@end
