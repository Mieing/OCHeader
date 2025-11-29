@class NSDictionary, NSString, AWEGCPStrategyDetailLynxView;

@interface AWEGCPStrategySectionElement : LynxUI <AWEGCPStrategyDetailLynxViewDelegate>

@property (retain, nonatomic) AWEGCPStrategyDetailLynxView *strategyView;
@property (retain, nonatomic) NSDictionary *nodeData;
@property (retain, nonatomic) NSString *uniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__561;

- (void)setData:(id)a0 requestReset:(BOOL)a1;
- (void)scrollSubViewToVisibleWithView:(id)a0 animated:(BOOL)a1;
- (void)onStrategyContentLayoutChange:(id)a0;
- (void)setupStrategyViewIfDataReady;
- (void)didTap:(id)a0;
- (void).cxx_destruct;
- (id)createView;
- (void)frameDidChange;

@end
