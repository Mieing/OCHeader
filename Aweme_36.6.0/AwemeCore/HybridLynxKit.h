@class HMDTTMonitor, NSDictionary, NSHashTable, NSMutableArray;
@protocol AnnieXLynxContainerFactoryProtocol, HybridLynxDevtoolProtocol;

@interface HybridLynxKit : NSObject

@property (retain, nonatomic) NSHashTable *createdViews;
@property (retain, nonatomic) NSDictionary *sdkMonitorConfig;
@property (retain, nonatomic) id<AnnieXLynxContainerFactoryProtocol> hybridLynxContaienrFactory;
@property (retain, nonatomic) id<AnnieXLynxContainerFactoryProtocol> anniexLynxContainerFactory;
@property (retain, nonatomic) HMDTTMonitor *sdkMonitor;
@property (retain, nonatomic) NSMutableArray *devtoolDelegates;
@property (weak, nonatomic) id<HybridLynxDevtoolProtocol> defaultDevtoolDelegate;

+ (void)broadcaseEventToLepus:(id)a0 withParams:(id)a1;
+ (id)sharedInstance;

- (void)initLogObserver;
- (void)enableSDKMonitorWithDeviceID:(id)a0 channel:(id)a1;
- (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)initLynxKit;
- (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(id)a1;
- (BOOL)enableLynxDevtool:(id)a0 withOptions:(id)a1;
- (void)addDevtoolDelegate:(id)a0;
- (void)broadcaseEventToLepus:(id)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
