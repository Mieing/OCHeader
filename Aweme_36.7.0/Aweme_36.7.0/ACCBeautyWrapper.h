@class NSString, NSMutableDictionary;
@protocol VERecorderPublicProtocol;

@interface ACCBeautyWrapper : NSObject <ACCCameraBuildListener, ACCBeautyProtocol>

@property (weak, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) NSMutableDictionary *acc_contextInfo;
@property (nonatomic) void *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL forceApply;

- (BOOL)updateComposerNode:(id)a0 key:(id)a1 value:(double)a2;
- (BOOL)updateMutipleComposerNodes:(id)a0 keys:(id)a1 values:(id)a2;
- (void)appendComposerNodesWithTags:(id)a0;
- (void)removeComposerNodesWithTags:(id)a0;
- (BOOL)replaceComposerNodesWithNewTag:(id)a0 old:(id)a1;
- (void)setCameraProvider:(id)a0;
- (BOOL)p_verifyCameraContext;
- (void)onCameraInit:(id)a0;
- (BOOL)preloadBeautyRenderBuildWith:(id)a0;
- (void).cxx_destruct;

@end
