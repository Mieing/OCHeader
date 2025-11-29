@class NSArray, NSDictionary, NSMutableDictionary, NSString, BDALokiConfiguration;
@protocol BDALokiManagerDelegate;

@interface BDALokiManager : NSObject <BDALokiComponentDelegate>

@property (retain, nonatomic) NSArray *lokiDatas;
@property (copy, nonatomic) NSDictionary *containerDics;
@property (retain, nonatomic) NSMutableDictionary *lokiComponentDics;
@property (copy, nonatomic) NSArray *customLynxBridges;
@property (weak, nonatomic) id<BDALokiManagerDelegate> delegate;
@property (retain, nonatomic) BDALokiConfiguration *lokiConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preRender;
- (void)sendEvent:(id)a0 componentId:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void)lokiStartLoad:(id)a0;
- (void)lokiRenderFinishComponent:(id)a0;
- (void)lokiJSRuntimeReady:(id)a0;
- (void)lokiShowFinish:(id)a0;
- (void)lokiClose:(id)a0;
- (void)lokiComponent:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (id)getLayoutComponent:(id)a0;
- (id)initWithDatas:(id)a0 container:(id)a1;
- (id)createLokiComponentWithContainer:(id)a0 lokiModel:(id)a1;
- (void)setLokiWithAlpha:(double)a0;
- (id)getComponentByeType:(id)a0;
- (void)lokiDowngrade:(id)a0 errorMsg:(id)a1 type:(long long)a2;
- (void)lokiSendEvent:(id)a0 componentId:(id)a1 data:(id)a2;
- (void)lokiLoadComponent:(id)a0;
- (void)sendInitEvent;
- (void)renderWithMode:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)render;

@end
