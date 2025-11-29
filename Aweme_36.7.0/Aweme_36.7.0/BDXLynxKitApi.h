@interface BDXLynxKitApi : BDXKitApi

+ (id)provideKitViewWithLynxParams:(id)a0;
+ (id)provideKitViewWithURL:(id)a0 context:(id)a1;
+ (void)registerUIElementIfNeed:(id)a0 kitView:(id)a1;
+ (id)provideKitViewWithURL:(id)a0 context:(id)a1 beforeCreateLynxView:(id /* block */)a2;
+ (id)createLynxKitParamsWithContext:(id)a0 beforeCreateLynxView:(id /* block */)a1;
+ (id)createLynxKitParamsWithContext:(id)a0;

@end
