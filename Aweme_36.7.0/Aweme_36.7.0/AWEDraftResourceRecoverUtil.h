@interface AWEDraftResourceRecoverUtil : NSObject

+ (id)componentClassesNeedsResourceRecover;
+ (void)p_regenerateTheNecessaryResourcesForPublishViewModel:(id)a0 tracer:(id)a1 errors:(id)a2 completion:(id /* block */)a3;
+ (void)executeRecoverBlock:(id /* block */)a0 retry:(long long)a1 completion:(id /* block */)a2;
+ (void)p_updateRelatedResourcesFor:(id)a0 withPublishModel:(id)a1 group:(id)a2 completion:(id /* block */)a3;
+ (void)p_updateViewModelsWithDownloadedEffects:(id)a0 publishViewModel:(id)a1 group:(id)a2 completion:(id /* block */)a3;
+ (void)prepareDraftResourceForPublishViewModel:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end
