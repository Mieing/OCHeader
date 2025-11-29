@class NSString;

@interface BDWebCsrfPlugin : IWKPluginObject <IWKClassPlugin>

@property (copy, nonatomic) id /* block */ regBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)webView:(id)a0 didInitWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 configuration:(id)a2;
- (id)initWithUARegister:(id /* block */)a0;
- (void).cxx_destruct;

@end
