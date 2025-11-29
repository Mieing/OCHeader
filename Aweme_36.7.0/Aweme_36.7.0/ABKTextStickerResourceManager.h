@interface ABKTextStickerResourceManager : NSObject

+ (void)copyFolderFromPath:(id)a0 toPath:(id)a1 withResourceId:(id)a2 completion:(id /* block */)a3;
+ (BOOL)validateParameters:(id)a0 destinationPath:(id)a1 resourceId:(id)a2 completion:(id /* block */)a3;
+ (void)executeCopyOperation:(id)a0 destinationPath:(id)a1 resourceId:(id)a2 completion:(id /* block */)a3;
+ (BOOL)checkSourceFolder:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (void)completeOperation:(BOOL)a0 error:(id)a1 completion:(id /* block */)a2;
+ (BOOL)ensureDestinationFolderExists:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (BOOL)handleExistingDestination:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (void)fetchEffectsWithDependents:(id)a0 complete:(id /* block */)a1;
+ (void)fetchCaptionResourceWithResourceId:(id)a0 complete:(id /* block */)a1;
+ (BOOL)copyFolderFromPath:(id)a0 toPath:(id)a1 withResourceId:(id)a2 error:(id *)a3;
+ (id)dependentModelsWithConfig:(id)a0;

@end
