@interface ACCAdvanceEditResourceInfoManager : NSObject

+ (id)typeToPanel;
+ (id)panelForType:(long long)a0;
+ (id)sharedManager;

- (void)downloadEffect:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)dealWithResponse:(id)a0 resourceType:(long long)a1 categoryId:(id)a2 completion:(id /* block */)a3;
- (void)p_fetchEffectListForType:(long long)a0 completion:(id /* block */)a1;
- (void)p_downloadEffect:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)fetchEffectDataForType:(long long)a0 categoryId:(id)a1 completion:(id /* block */)a2;
- (void)fetchEffectCategoriesForType:(long long)a0 completion:(id /* block */)a1;

@end
