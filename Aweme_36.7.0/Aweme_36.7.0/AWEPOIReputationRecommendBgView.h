@class AWEPOICouponBarView, NSString, AWEPOIShelfContainerComponentViewModel, AWEPOIShelfModuleModel, UIView, AWEPOIShelfListView;
@protocol AWEPOIReputationRecommendBgViewDelegate;

@interface AWEPOIReputationRecommendBgView : UIView <AWEPOIShelfListViewDelegate, AWEPOICouponBarViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (weak, nonatomic) id<AWEPOIReputationRecommendBgViewDelegate> delegate;
@property (nonatomic) double normalListHeight;
@property (nonatomic) double expandListHeight;
@property (nonatomic) double couponBarHeight;
@property (weak, nonatomic) AWEPOIShelfListView *normalListView;
@property (weak, nonatomic) AWEPOIShelfListView *expandListView;
@property (weak, nonatomic) AWEPOICouponBarView *shelfCouponBarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshHeight;
- (void)loadUI;
- (void)shelfListView:(id)a0 heightDidChange:(double)a1;
- (void)loadWithViewModel:(id)a0 shelfModuleModel:(id)a1 delegate:(id)a2;
- (void)poiCouponBarViewHeightChange:(double)a0;
- (void).cxx_destruct;

@end
