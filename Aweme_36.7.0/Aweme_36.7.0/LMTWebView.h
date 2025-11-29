@class NSMutableDictionary, NSDictionary, NSString, AWEUILoadingView, UIView;
@protocol LMTWebViewDelegate, BDXViewContainerProtocol;

@interface LMTWebView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (weak, nonatomic) id<LMTWebViewDelegate> delegate;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSDictionary *queryParams;
@property (retain, nonatomic) NSMutableDictionary *readyUpdateDict;
@property (nonatomic) BOOL isFinishLoad;
@property (nonatomic) long long transparentPass;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSDictionary *bizData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)annieViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)containerDidStartLoading:(id)a0;
- (void)sendEvent:(id)a0 params:(id)a1;
- (void)updateGlobalProps:(id)a0;
- (void)hideLoading;
- (void)loadWithSchema:(id)a0 bizData:(id)a1;
- (void)updateWindowWithKey:(id)a0 stringValue:(id)a1;
- (double)alphaOfPointFromLayer:(struct CGPoint { double x0; double x1; })a0;
- (void)runJsCode:(id)a0;
- (void)injectionWithKey:(id)a0 stringValue:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)showLoading;

@end
