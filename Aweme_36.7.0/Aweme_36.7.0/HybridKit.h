@class NSDictionary;

@interface HybridKit : NSObject

@property (retain, nonatomic) NSDictionary *defaultGlobalProps;

+ (id)sharedInstance;

- (void)unregisterResourceLoaderWithBid:(id)a0;
- (void)setupCrashReportInfoWithParam:(id)a0;
- (id)createLynxViewWithParam:(id)a0 context:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)kitViewWithParam:(id)a0 context:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)configGlobalPropsInParams:(id)a0;
- (BOOL)enableLynxDevtool:(id)a0 withOptions:(id)a1;
- (void)setupLynxKit;
- (void)registerResourceLoader:(id)a0 forBid:(id)a1;
- (void)configDefaultGlobalProps:(id)a0;
- (id)kitViewWithUrl:(id)a0 context:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)resolvedURLFromParam:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
