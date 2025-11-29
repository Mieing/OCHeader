@class NSString, NSMutableArray;

@interface BDUGLuckyContainerCardService : NSObject <BDXPageDelegate, BDXBridgeInterceptor>

@property (retain, nonatomic) NSMutableArray *cards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)containerDidPageReady:(id)a0 sourceParam:(id)a1;
- (void)container:(id)a0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)pageReadyCalledNotification:(id)a0;
- (void)showLynxCard:(id)a0;
- (void)installBridgeInterceptor;
- (BOOL)resizeLynxCard:(id)a0 withIntrinsicContentSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)pageCustomClose:(id)a0;
- (void)xBridgeWillHandleMethod:(id)a0 container:(id)a1 params:(id)a2;
- (void)openLynxCardWithURLString:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
