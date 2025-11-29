@class NSString, IESECServiceProxy, NSMutableDictionary, IESECBlenderContext;
@protocol AnnieXContainerBaseProtocol, IESECBlenderXBridgeRegister;

@interface IESECBlenderLynxView : IESECBlenderBlockBaseView {
    IESECBlenderContext *blenderContext;
}

@property (nonatomic) BOOL hasBindedMainUrlView;
@property (retain, nonatomic) id<AnnieXContainerBaseProtocol> cardView;
@property (retain, nonatomic) IESECServiceProxy<IESECBlenderXBridgeRegister> *xbrides;
@property (nonatomic) struct CGSize { double width; double height; } lynxAirIntrinsicContentSize;
@property (retain, nonatomic) NSString *lazyLoad;
@property (nonatomic) BOOL hasLoadCardView;
@property (retain, nonatomic) NSMutableDictionary *perfData;

- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)container:(id)a0 onSetupLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)container:(id)a0 onUpdateLynxInfo:(id)a1 bulletInfo:(id)a2;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateGlobalProps:(id)a0;
- (void)didAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sliceXFlexLayoutMeasureView:(id)a0 width:(double)a1 widthMode:(unsigned long long)a2 height:(double)a3 heightMode:(unsigned long long)a4;
- (void)setBlenderContext:(id)a0;
- (BOOL)updateWithSliceXElement:(id)a0 error:(id *)a1;
- (void)didDisappear:(BOOL)a0;
- (id)blenderContext;
- (void)globalInfoChanged:(id)a0;
- (void)apiResponseChanged:(id)a0;
- (void)addPerfData:(id)a0;
- (id)getMainView;
- (BOOL)shouldAttachLynxView:(id)a0;
- (void)handlePageVisibilityChange:(BOOL)a0 source:(id)a1;
- (BOOL)enableReportPerf;
- (void)didBecomeActive;
- (void)willResignActive;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithContext:(id)a0;

@end
