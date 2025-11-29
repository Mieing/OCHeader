@class AWEPOIAtmosphereVideoSameListView, AWEPOIAtmosphereHighLightView, NSString, AWEPOICouponBarView, AWEPOIShelfModuleModel, AWEPOIAtmosphereCPSListView, AWEPOIShelfContainerComponentViewModel, AWEPOIReputationRecommendBgView, AWEPOIAtmosphereVideoPlatformIdentifyView, AWEPOIShelfListView;
@protocol AWEPOIShelfModuleViewDelegate;

@interface AWEPOIShelfModuleView : UIView <AWEPOIShelfListViewDelegate, AWEPOIReputationRecommendBgViewDelegate, AWEPOIAtmosphereCPSListViewDelegate, AWEPOIAtmosphereVideoSameListViewDelegate, AWEPOIAtmosphereVideoPlatformIdentifyViewDelegate, AWEPOIAtmosphereHighLightViewDelegate, AWEPOICouponBarViewDelegate>

@property (retain, nonatomic) AWEPOIShelfContainerComponentViewModel *viewModel;
@property (weak, nonatomic) id<AWEPOIShelfModuleViewDelegate> delegate;
@property (weak, nonatomic) AWEPOIAtmosphereCPSListView *cpsListView;
@property (weak, nonatomic) AWEPOIAtmosphereVideoSameListView *videoSameListView;
@property (weak, nonatomic) AWEPOIAtmosphereVideoPlatformIdentifyView *videoPlatformIdentifyView;
@property (weak, nonatomic) AWEPOIAtmosphereHighLightView *highlightListView;
@property (weak, nonatomic) AWEPOIReputationRecommendBgView *reputationRecommendBgView;
@property (weak, nonatomic) AWEPOICouponBarView *shelfCouponBarView;
@property (nonatomic) double navBarTop;
@property (nonatomic) double navBarHeight;
@property (nonatomic) double couponBarHeight;
@property (nonatomic) double couponBarTop;
@property (nonatomic) double cpsListHeight;
@property (nonatomic) double videoSameHeight;
@property (nonatomic) double platformIdentifyListHeight;
@property (nonatomic) double highlightListHeight;
@property (nonatomic) double normalListHeight;
@property (nonatomic) double expandListHeight;
@property (weak, nonatomic) AWEPOIShelfListView *normalListView;
@property (weak, nonatomic) AWEPOIShelfListView *expandListView;
@property (retain, nonatomic) AWEPOIShelfModuleModel *shelfModuleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadUI;
- (void)poiAtmosphereCPSListViewHeightChange:(double)a0;
- (void)shelfListView:(id)a0 heightDidChange:(double)a1;
- (void)loadWithViewModel:(id)a0 shelfModuleModel:(id)a1 delegate:(id)a2;
- (void)poiAtmosphereHighLightViewHeightChange:(double)a0;
- (void)poiAtmosphereVideoPlatformIdentifyViewHeightChange:(double)a0;
- (void)poiAtmosphereVideoSameListViewHeightChange:(double)a0;
- (void)poiCouponBarViewHeightChange:(double)a0;
- (void)poiReputationRecommendBgViewHeightChange:(double)a0;
- (void)loadUIAtmosphereWholeShelf;
- (void)loadUINormalShelf;
- (void)loadUIBackground;
- (id)highlightListModel;
- (id)videoPlatformIdentifyListModel;
- (id)videoSameListModel;
- (void)refreshModuleHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setRoundedCorners:(unsigned long long)a0 radius:(double)a1;

@end
