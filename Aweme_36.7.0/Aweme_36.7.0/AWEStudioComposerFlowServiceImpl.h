@class NSString;

@interface AWEStudioComposerFlowServiceImpl : HTSService <AWEStudioComposerFlowService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exitTopFlowAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)exitAllFlowsAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)shouldFinishRecordWithPublishModel:(id)a0;
- (void)finishRecordWithPublishModel:(id)a0 viewController:(id)a1;
- (BOOL)shouldFinishAlbumWithAssetModels:(id)a0 publishModel:(id)a1;
- (void)finishAlbumWithAssetModels:(id)a0 publishModel:(id)a1 viewController:(id)a2;

@end
