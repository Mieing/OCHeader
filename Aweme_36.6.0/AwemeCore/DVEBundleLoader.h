@interface DVEBundleLoader : NSObject

+ (id)shareManager;
+ (id)p_convertResourceCategoryModelsToEffectCategories:(id)a0;
+ (id /* block */)commonLoadCompletion:(id /* block */)a0;
+ (id)p_convertResourceModelsToEffectModels:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)runInGlobalThread:(id /* block */)a0;
- (void)transitionCategory:(id)a0 completion:(id /* block */)a1;
- (void)transition:(id)a0 category:(id)a1 completion:(id /* block */)a2;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
