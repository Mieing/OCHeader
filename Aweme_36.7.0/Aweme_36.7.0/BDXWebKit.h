@class NSString;

@interface BDXWebKit : NSObject <BDXWebKitProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (BOOL)enableReuseWithParams:(id)a0;
+ (unsigned long long)serviceType;

- (void)trackLifeCycleEvent:(id)a0 withParam:(id)a1;
- (id)createViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1 url:(id)a2;
- (id)preCreateKitViewWithWebKitModel:(id)a0;
- (id)reuseKitViewWithWebKitModel:(id)a0;
- (id)configURLWithParams:(id)a0 url:(id)a1;
- (id)webViewSettingsWithParam:(id)a0 url:(id)a1;
- (void)trackLifeCycleEvent:(id)a0 timeStamp:(double)a1 withParam:(id)a2;
- (void)configForestRequestParamsBuilderWithWebView:(id)a0 params:(id)a1 urlString:(id)a2 forestEnableType:(long long)a3;
- (id)getKitViewFromCacheWithWebKitModel:(id)a0;
- (void)configureViewWithView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 params:(id)a2 url:(id)a3 forestEnableType:(long long)a4;
- (BOOL)p_shouldDisableHandleSSLError:(id)a0;

@end
