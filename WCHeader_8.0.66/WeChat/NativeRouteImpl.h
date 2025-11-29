@class NSString, NSDictionary, LiteAppDynamicModuleCallback, UIViewController;

@interface NativeRouteImpl : NSObject <MMKJSEvent>

@property (retain, nonatomic) LiteAppDynamicModuleCallback *callBack;
@property (weak, nonatomic) UIViewController *vc;
@property (retain, nonatomic) NSDictionary *option;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)nativeRoute:(id)a0 currentVc:(id)a1 resultCallback:(id)a2;
- (long long)kindaGetType;
- (void)kindaEndWithResult:(id)a0 extraInfo:(id)a1;
- (void)kindaCloseWebViewImpl:(BOOL)a0 completion:(id)a1;
- (void).cxx_destruct;

@end
