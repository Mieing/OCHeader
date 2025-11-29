@class NSString, IESECSliceSlice, UIView, IESECGoodsDetailComponentObject;
@protocol IESECGoodsDetailBackgroundContainerDelegate;

@interface IESECGoodsDetailBackgroundContainer : UIView <IESECHalfPageFloatContainerDelegate>

@property (weak, nonatomic) id<IESECGoodsDetailBackgroundContainerDelegate> delegate;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *componentData;
@property (copy, nonatomic) NSString *searchWord;
@property (retain, nonatomic) IESECSliceSlice *topBannerSlice;
@property (retain, nonatomic) UIView *topBannerView;
@property (nonatomic) BOOL didTrackShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 showResult:(BOOL)a1;
- (void)setupSliceViews;
- (void)adjustUIStyleThenSetIntoTopBannerWithLiveAtmosphere:(id)a0;
- (void)setupTopBannerView;
- (id)generateNewTopBannerSliceDataWithSearchWord:(id)a0 oldSliceData:(id)a1;
- (void)updateTopBannerSliceView:(id)a0;
- (void)hideTopBanner;
- (void)adjustLiveAtmosphereUIStyle:(id)a0;
- (id)generateNewTopBannerSLiceDataWithLiveAtmosphereModel:(id)a0 oldSliceData:(id)a1;
- (void)updateWithTopBannerObject:(id)a0;
- (void)didUpdateSearchRecommendWord:(id)a0;
- (void)showTopBanner;
- (void)hideAllSubViews;
- (void)updateWithLiveAtmosphere:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupUI;

@end
