@class VEAlgorithmSession, NSString, NLEInterface_OC;

@interface ACCNLEEditHDRWrapper : NSObject <ACCEditBuildListener, ACCEditHDRProtocolD>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property (nonatomic) int oneKeyScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)p_removeAllHDRTrack;
- (void)enableLensHDRWithModelPath:(id)a0;
- (void)disableLensHDR;
- (void)enableOneKeyHDRWithModel:(id)a0 disableDenoise:(BOOL)a1 asfMode:(long long)a2 hdrMode:(long long)a3;
- (void)disableOneKeyHDR;
- (BOOL)shouldUseDenoise;
- (void)startMatchingAlgorithmWithVideoData:(id)a0 completion:(id /* block */)a1;
- (int)detectHDRScene;
- (void).cxx_destruct;
- (int)currentScene;

@end
