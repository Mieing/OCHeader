@class NLEInterface_OC, NSString, NSHashTable, NLETrackSlot_OC;

@interface ACCNLEEditTrimWrapper : NSObject <ACCEditBuildListener, ACCEditTrimProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) NLETrackSlot_OC *trimSlot;
@property (nonatomic) BOOL hasShadowSlot;
@property (retain, nonatomic) NSHashTable *shadowTableSlots;
@property (nonatomic) unsigned long long idx;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (id)associatedSlot;
- (id)shadowSlots;
- (void)bindShadowSlots:(id)a0;
- (void)trackEventTrimDuration:(double)a0;
- (void)trimSlotTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 completion:(id /* block */)a1;
- (void)trimSlotClipTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 autoCommit:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateNLE:(id)a0 associatedSlot:(id)a1;
- (void).cxx_destruct;

@end
