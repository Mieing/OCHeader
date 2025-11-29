@interface HunterContainerFactory : NSObject

+ (id)hybridContainerWithContext:(id)a0;
+ (id)hunterControllerWithSchema:(id)a0 delegate:(id)a1;
+ (id)hunterPreserveDataManager;
+ (id)hunterPopupControllerWithSchema:(id)a0;
+ (void)callHunterWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
+ (void)callHunterWithParamModel:(id)a0 completionHandler:(id /* block */)a1 delegate:(id)a2;
+ (id)findTargetConfigModelGlobalWithBundle:(id)a0 channel:(id)a1;
+ (BOOL)openPopupWhenCreateContainer;
+ (id)findTargetConfigModel:(id)a0 bundle:(id)a1 channel:(id)a2;

@end
