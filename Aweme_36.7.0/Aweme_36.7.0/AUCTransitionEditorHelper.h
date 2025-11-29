@interface AUCTransitionEditorHelper : NSObject

+ (void)buildEditorWithResourceInfos:(id)a0 repoContainer:(id)a1 completion:(id /* block */)a2;
+ (void)showEditorPageWithRepoContainer:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
+ (void)p_fillMediaTypeToCreationToolModel:(id)a0 withAssetModels:(id)a1;
+ (void)p_buildEditorWithAssetModelList:(id)a0 repoContainer:(id)a1 onCompletion:(id /* block */)a2;
+ (void)p_buildEditorWithImage:(id)a0 repoContainer:(id)a1 onCompletion:(id /* block */)a2;
+ (void)p_buildEditorWithVideoData:(id)a0 repoContainer:(id)a1 onCompletion:(id /* block */)a2;
+ (void)showEditorWithCreationToolData:(id)a0 buildCompletion:(id /* block */)a1;

@end
