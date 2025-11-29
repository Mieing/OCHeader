@interface ACCImageImportHelper : NSObject

+ (void)fetchCoverWithAssetModels:(id)a0 workspace:(id)a1 withSuccessBlock:(id /* block */)a2;
+ (void)generateWorkspaceWithAssetModels:(id)a0 inputWorkspace:(id)a1 completion:(id /* block */)a2;
+ (void)generateWorkspaceWithCAKMediaResources:(id)a0 inputWorkspace:(id)a1 completion:(id /* block */)a2;
+ (void)generateWorkspaceWithImageObjects:(id)a0 inputWorkspace:(id)a1 completion:(id /* block */)a2;
+ (void)generateWorkspaceWithImagePaths:(id)a0 inputWorkspace:(id)a1 completion:(id /* block */)a2;

@end
