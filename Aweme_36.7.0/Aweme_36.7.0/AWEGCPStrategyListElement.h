@class NSDictionary, NSString, AWEGCPStrategyDetailLynxView;

@interface AWEGCPStrategyListElement : LynxUI

@property (retain, nonatomic) AWEGCPStrategyDetailLynxView *strategyView;
@property (retain, nonatomic) NSDictionary *nodeData;
@property (retain, nonatomic) NSString *uniqueKey;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__571;
+ (id)__lynx_ui_method_config__692;

- (void)setData:(id)a0 requestReset:(BOOL)a1;
- (void)setupStrategyViewIfDataReady;
- (void)onExposureStatusChange:(id)a0 withResult:(id /* block */)a1;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (id)createView;
- (void)frameDidChange;

@end
