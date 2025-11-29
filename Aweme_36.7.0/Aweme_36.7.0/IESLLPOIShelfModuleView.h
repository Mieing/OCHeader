@class IESLLPOIReputationRecommendBgView, IESLLPOIShelfContainerComponentViewModel, IESLLPOIShelfListView, IESLLPOIAtmosphereCPSListView, IESLLPOIShelfModuleModel, NSString, IESLLPOIAtmosphereVideoPlatformIdentifyView, IESLLPOIAtmosphereHighLightView, IESLLPOICouponBarView, IESLLPOIAtmosphereVideoSameListView;
@protocol IESLLPOIShelfModuleViewDelegate;

@interface IESLLPOIShelfModuleView : UIView <IESLLPOIShelfListViewDelegate, IESLLPOIReputationRecommendBgViewDelegate, IESLLPOIAtmosphereCPSListViewDelegate, IESLLPOIAtmosphereVideoSameListViewDelegate, IESLLPOIAtmosphereVideoPlatformIdentifyViewDelegate, IESLLPOIAtmosphereHighLightViewDelegate, IESLLPOICouponBarViewDelegate>

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (weak, nonatomic) id<IESLLPOIShelfModuleViewDelegate> delegate;
@property (weak, nonatomic) IESLLPOIAtmosphereCPSListView *cpsListView;
@property (weak, nonatomic) IESLLPOIAtmosphereVideoSameListView *videoSameListView;
@property (weak, nonatomic) IESLLPOIAtmosphereVideoPlatformIdentifyView *videoPlatformIdentifyView;
@property (weak, nonatomic) IESLLPOIAtmosphereHighLightView *highlightListView;
@property (weak, nonatomic) IESLLPOIReputationRecommendBgView *reputationRecommendBgView;
@property (weak, nonatomic) IESLLPOICouponBarView *shelfCouponBarView;
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
@property (weak, nonatomic) IESLLPOIShelfListView *normalListView;
@property (weak, nonatomic) IESLLPOIShelfListView *expandListView;
@property (retain, nonatomic) IESLLPOIShelfModuleModel *shelfModuleModel;
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
