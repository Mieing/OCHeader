@class NSString, NLEInterface_OC, NSHashTable, NLETrackSlot_OC, ACCTCECropResource;

@interface ACCNLEEditCropWrapper : NSObject <ACCEditBuildListener, ACCEditCropProtocol>

@property (retain, nonatomic) NLETrackSlot_OC *cropSlot;
@property (nonatomic) BOOL hasShadowSlot;
@property (retain, nonatomic) NSHashTable *shadowTableSlots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) ACCTCECropResource *cropResource;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (id)associatedSlot;
- (id)shadowSlots;
- (void)updateNLE:(id)a0 associatedSlot:(id)a1 cropResource:(id)a2;
- (void)bindShadowSlots:(id)a0;
- (void).cxx_destruct;

@end
