@class NSString;

@interface BDWebCrashFixPlugin : IWKPluginObject <IWKClassPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)webView:(id)a0 willInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;

@end
