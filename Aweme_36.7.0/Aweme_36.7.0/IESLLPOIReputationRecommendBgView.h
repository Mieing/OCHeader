@class IESLLPOICouponBarView, IESLLPOIShelfListView, NSString, UIView, IESLLPOIShelfModuleModel, IESLLPOIShelfContainerComponentViewModel;
@protocol IESLLPOIReputationRecommendBgViewDelegate;

@interface IESLLPOIReputationRecommendBgView : UIView <IESLLPOIShelfListViewDelegate, IESLLPOICouponBarViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
@property (weak, nonatomic) id<IESLLPOIReputationRecommendBgViewDelegate> delegate;
@property (nonatomic) double normalListHeight;
@property (nonatomic) double expandListHeight;
@property (nonatomic) double couponBarHeight;
@property (weak, nonatomic) IESLLPOIShelfListView *normalListView;
@property (weak, nonatomic) IESLLPOIShelfListView *expandListView;
@property (weak, nonatomic) IESLLPOICouponBarView *shelfCouponBarView;
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
