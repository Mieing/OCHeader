@class IESLiveImageCropHandler, NSString;

@interface IESLiveImageCropServiceImpl : NSObject <IESLivePrivilegeGlobalModuleImageCropService>

@property (retain, nonatomic) IESLiveImageCropHandler *imageCropHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openImageCarpPageWithCompletionBlock:(id /* block */)a0 requestPage:(id)a1 authorId:(id)a2 privacyCert:(id)a3 withPrivacyCert:(id)a4 withContext:(id)a5;
- (void)openAnchorImageCarpPageWithCompletionBlock:(id /* block */)a0 requestPage:(id)a1 coverStatus:(id)a2 privacyCert:(id)a3 withPrivacyCert:(id)a4 withContext:(id)a5;
- (void)openCameraWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 requestPage:(id)a2 originViewController:(id)a3 completionBlock:(id /* block */)a4;
- (void)openImageCarpPgaeFromEmojiTemplateWithPrivacyCert:(id)a0 withPrivacyCert:(id)a1 requestPage:(id)a2 completionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
