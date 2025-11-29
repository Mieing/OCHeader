@class NSString;

@interface IESLiveEffectMixInfoHandler : NSObject <IESLivePrivilegeGlobalModuleEffectService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildEffectMixInfoWithUserEnterEffectConfig:(id)a0 withDIContext:(id)a1 completion:(id /* block */)a2;
- (id)generateTemplateEngineConfigWithPieceValues:(id)a0;
- (id)readPlayerVideoDataWithEffectID:(long long)a0 error:(id *)a1;
- (id)generateImageWithContent:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 effectNode:(id)a2 templateConfig:(id)a3 useContentSize:(BOOL)a4 diContext:(id)a5;
- (struct CGSize { double x0; double x1; })playerSizeFromVideoData:(id)a0;
- (id)generateContainerWithAlignment:(long long)a0;
- (id)generateImageWithContent:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1 container:(id)a2;
- (id)generateAspectFitImageWithContent:(id)a0 container:(id)a1 contentSize:(struct CGSize { double x0; double x1; })a2 containerSize:(struct CGSize { double x0; double x1; })a3;

@end
