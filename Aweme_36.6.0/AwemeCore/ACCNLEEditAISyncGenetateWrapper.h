@class NSString, NLEInterface_OC;

@interface ACCNLEEditAISyncGenetateWrapper : NSObject <ACCEditBuildListener, ACCEditAISyncGenetateProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (BOOL)replaceMainTrackImageMaterialWithPictureURL:(id)a0;
- (BOOL)replaceMainTrackImageMaterialWithPictureURL:(id)a0 slotDuration:(double)a1;
- (BOOL)rebuildMainTrackUseVideoAssetWtih:(id)a0;
- (void).cxx_destruct;

@end
