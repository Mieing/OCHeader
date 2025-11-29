@class NSDictionary, IESECLiveHotSaleView, IESECGCDTimer;

@interface IESECLiveSliceAuctionBidAtmosphereView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) IESECLiveHotSaleView *hotSaleView;
@property (copy, nonatomic) NSDictionary *hotSaleStyleDict;
@property (copy, nonatomic) NSDictionary *modelDict;
@property (retain, nonatomic) IESECGCDTimer *hotSaleViewDisappearTimer;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)setupByHotSaleStyleDict:(id)a0;
- (void)updateByModelDict:(id)a0;
- (void)setupByHotSaleStyleModel:(id)a0;
- (void)setupHotSaleViewDisappearAnnimationTimer;
- (void)letHotSaleViewDoDisappearAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layoutSubviews;
- (void)setupViews;

@end
