@class NSString;

@interface CJPayRouteServiceImp : NSObject <CJPayRouterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (void)p_registerRouters;

- (BOOL)i_openScheme:(id)a0 withDelegate:(id)a1;
- (BOOL)i_openScheme:(id)a0 callBack:(id /* block */)a1;
- (BOOL)p_canOpenScheme:(id)a0;

@end
