@class UIView;
@protocol IESECLiveHotAtmosphereViewProtocol;

@interface IESECPDPLiveHotSaleComponentView : IESECSliceXBaseContentElementView

@property (retain, nonatomic) UIView<IESECLiveHotAtmosphereViewProtocol> *liveHotAtmosphereView;
@property (nonatomic) struct CGSize { double width; double height; } latestIntrinsicContentSize;
@property (nonatomic) BOOL measuredOnce;

- (BOOL)setupElementView;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
