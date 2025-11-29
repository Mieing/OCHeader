@class NSString;

@interface IESLocalLifeRouterBizService : HTSService <IESLocalLifeRouterBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)transferToURLString:(id)a0;
+ (void)transferToURLString:(id)a0 completion:(id /* block */)a1;
+ (id)viewControllerForURLString:(id)a0;
+ (BOOL)canOpenURLString:(id)a0;
+ (void)registerInterceptorDelegate:(id)a0 interceptorKey:(id)a1;
+ (void)unregisterInterceptorDelegate:(id)a0 interceptorKey:(id)a1;
+ (BOOL)transferToURLString:(id)a0 userInfo:(id)a1;
+ (void)routerDidTransferWithURLString:(id)a0 toViewController:(id)a1;
+ (void)registerDelegate:(id)a0;
+ (void)unregisterDelegate:(id)a0;

- (void)verifyForRouter:(id)a0;

@end
