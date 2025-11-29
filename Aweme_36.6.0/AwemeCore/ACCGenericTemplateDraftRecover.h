@class NSString;

@interface ACCGenericTemplateDraftRecover : NSObject <AWEStudioGenericTemplateUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkTemplateResourceReady:(id)a0 completion:(id /* block */)a1;
+ (void)writeRenderImageToeffectCachePathWithRepoAIGCSyncModel:(id)a0 publishModel:(id)a1 localPath:(id)a2 completion:(id /* block */)a3;
+ (void)removeEffectCachePathWithRepoAIGCSyncModel:(id)a0 publishModel:(id)a1 localPath:(id)a2 completion:(id /* block */)a3;
+ (id)effectCachePathWithRepoAIGCSyncModel:(id)a0 publishModel:(id)a1;
+ (id /* block */)genericTemplateModelForSideslipRecoverBlockWithModel:(id)a0;
+ (id /* block */)genericTemplateModelForOneClickRecoverBlockWithModel:(id)a0;
+ (id /* block */)genericAIGCSyncModelForOneClickRecoverBlockWithModel:(id)a0;
+ (id /* block */)genericCoverPicTemplateModelRecoverBlockWithModel:(id)a0;


@end
