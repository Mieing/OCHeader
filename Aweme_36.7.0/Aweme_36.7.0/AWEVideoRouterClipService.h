@class NSString;
@protocol ACCMVTemplateManagerProtocol;

@interface AWEVideoRouterClipService : NSObject <AWEStudioClipService>

@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)startVideoClipViewControllerWithModel:(id)a0 originPublishModel:(id)a1 extraDict:(id)a2;
- (id)startVideoClipViewControllerWithAssetModels:(id)a0 withExtraInfo:(id)a1 processDataBlock:(id /* block */)a2;
- (void)startVideoEditWithVideoURL:(id)a0 URI:(id)a1 isLocalResource:(BOOL)a2 extraDict:(id)a3 completion:(id /* block */)a4;
- (void)startVideoEditWithVideoURL:(id)a0 URI:(id)a1 isLocalResource:(BOOL)a2 publishViewModel:(id)a3 completion:(id /* block */)a4;
- (void)startVideoEditWithImageURL:(id)a0 URI:(id)a1 extraDict:(id)a2 completion:(id /* block */)a3;
- (void)startVideoWithLocalImageURL:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)startVideoEditWithImageURL:(id)a0 URI:(id)a1 publishViewModel:(id)a2 completion:(id /* block */)a3;
- (void)startVideoWithLocalImageURL:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void)monitorOpenEditorDurationWithResourceType:(long long)a0 duration:(double)a1 success:(BOOL)a2 error:(id)a3;
- (void)startVideoWithLocalVideoURL:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)startVideoWithLocalVideoURL:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void)publishViewModelAddBusinessWithInfo:(id)a0 params:(id)a1;
- (void)publishViewModelAddActivityInfo:(id)a0 params:(id)a1;
- (void).cxx_destruct;

@end
