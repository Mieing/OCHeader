@interface AWEImageAlbumEditImageTemplateComponent : ACCFeatureComponent

+ (void)regenerateTheNecessaryResourcesForPublishViewModel:(id)a0 completion:(id /* block */)a1;
+ (id)recoverBlocksForPublishModel:(id)a0;
+ (void)clearImageTemplateInfoForImageAtIndex:(long long)a0 publishModel:(id)a1;
+ (BOOL)ifTemplateCacheIsClearedFor:(id)a0;
+ (id)transferCacheDicToTemplateInfo:(id)a0 taskID:(id)a1;

- (void)componentDidAppear;

@end
