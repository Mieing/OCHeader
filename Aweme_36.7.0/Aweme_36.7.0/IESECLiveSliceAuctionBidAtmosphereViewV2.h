@class IESECLiveGoodsHotSaleModel, IESECLiveHotSaleView, NSDictionary, IESECLiveContext, IESECGCDTimer, IESECLiveTracker;

@interface IESECLiveSliceAuctionBidAtmosphereViewV2 : IESECSliceXBaseContentElementView

@property (retain, nonatomic) IESECLiveHotSaleView *hotSaleView;
@property (copy, nonatomic) NSDictionary *hotSaleStyleDict;
@property (copy, nonatomic) NSDictionary *modelDict;
@property (weak, nonatomic) IESECLiveContext *liveContext;
@property (weak, nonatomic) IESECLiveTracker *tracker;
@property (nonatomic) BOOL disableCountDownAtmos;
@property (retain, nonatomic) IESECGCDTimer *hotSaleTimer;
@property (retain, nonatomic) IESECLiveGoodsHotSaleModel *preDigitalHotSaleInfo;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)showCountDownAtmosphereIfNeed:(id)a0;
- (void)p_updateAuctionAtmosphere:(id)a0 tryShowCountDown:(BOOL)a1 countDown:(long long)a2;
- (id)handleAuctionAtmosFrequencyControl:(id)a0;
- (void)invalidateHotSaleTimer;
- (void)setupViewsWithContext:(id)a0;
- (void)updateByModelDict:(id)a0;
- (void)setupByHotSaleStyle;
- (void)showAtmosphereIfNeeded:(id)a0;
- (long long)getAuctionEndInterval:(long long)a0;
- (BOOL)bothAtmosphereExist:(id)a0;
- (void)hideHotSaleView;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
