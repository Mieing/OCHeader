@interface BDASifContainerService : NSObject

+ (id)createContainerWithConfig:(id)a0;
+ (id)createContainerViewWithConfig:(id)a0;
+ (id)addPageHostWithUrl:(id)a0 config:(id)a1;
+ (id)addCommonSchemeParamsWithUrl:(id)a0 config:(id)a1;
+ (id)createBDXContextWithConfig:(id)a0;
+ (id)createSifLifecycleWithConfig:(id)a0;
+ (id)addPopupHostWithUrl:(id)a0 config:(id)a1;
+ (id)getAllMethodsInstances:(id)a0;
+ (void)addLynxContextWithConfig:(id)a0 context:(id)a1;
+ (void)addWebContextWithConfig:(id)a0 context:(id)a1;
+ (id)getClientSecWKConfiguration:(id)a0;
+ (id)openPopupViewControllerWithConfig:(id)a0;
+ (void)initialize;
+ (void)setup;

@end
