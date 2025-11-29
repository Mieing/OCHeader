@class NSString, FWFObjectFlutterApiImpl;

@interface FWFWebView : WKWebView <FlutterPlatformView>

@property (readonly, nonatomic) FWFObjectFlutterApiImpl *objectApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configuration:(id)a1 binaryMessenger:(id)a2 instanceManager:(id)a3;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)view;
- (void).cxx_destruct;

@end
