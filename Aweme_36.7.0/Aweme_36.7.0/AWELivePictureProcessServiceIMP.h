@class NSString;

@interface AWELivePictureProcessServiceIMP : NSObject <IESLivePictureProcessService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyTemplateToImageWithOriginImagePath:(id)a0 templateID:(id)a1 infoModels:(id)a2 enterFrom:(id)a3 completion:(id /* block */)a4;
- (void)predownloadTemplateResourcesWithTemplateID:(id)a0 enterFrom:(id)a1;

@end
