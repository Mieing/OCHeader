@class NSString, NLEInterface_OC;

@interface ACCNLEEditAIExpandWrapper : NSObject <ACCEditBuildListener, ACCEditAIExpandProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateSlot:(id)a0 withTransform:(id)a1;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (BOOL)replaceMainTrackImageMaterialWithPictureURL:(id)a0;
- (void)updateSlot:(id)a0 withTransformProtocol:(id)a1;
- (id)mainTrackMaterialTransform;
- (BOOL)updateMainTrackMaterialTransform:(id)a0 forSlot:(id)a1;
- (id)mainTrackWithMaterialTransform:(id)a0;
- (BOOL)backupToOriginalImageMaterialWithResourceFile:(id)a0;
- (void).cxx_destruct;

@end
