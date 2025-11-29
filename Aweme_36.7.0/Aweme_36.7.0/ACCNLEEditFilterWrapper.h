@class NLETrack_OC, NLEInterface_OC, ACCLokiURS, NSString, NLETrackSlot_OC, NSMutableArray;

@interface ACCNLEEditFilterWrapper : NSObject <ACCEditBuildListener, ACCEditFilterProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (weak, nonatomic) NLETrackSlot_OC *filterSlot;
@property (retain, nonatomic) ACCLokiURS *URS;
@property (retain, nonatomic) NSMutableArray *appendedFilters;
@property (retain, nonatomic) NLETrack_OC *filterTrack;
@property (copy, nonatomic) NSString *currentFilterId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)replaceToComposerFilter:(id)a0 intensity:(float)a1;
- (BOOL)hadAppendFilter:(id)a0;
- (BOOL)switchColorLeftFilter:(id)a0 rightFilter:(id)a1 inPosition:(float)a2 inLeftIntensity:(float)a3 inRightIntensity:(float)a4;
- (float)filterEffectOriginIndensity:(id)a0;
- (void)applyFilterEffect:(id)a0 intensity:(float)a1 isGlobal:(BOOL)a2;
- (void)applyFilterEffect:(id)a0 isGlobal:(BOOL)a1;
- (BOOL)switchColorLeftFilter:(id)a0 rightFilter:(id)a1 inPosition:(float)a2;
- (void)applySpecialFilter:(id)a0;
- (void)applyNLEFilterEffect:(id)a0 intensity:(float)a1 isGlobal:(BOOL)a2;
- (float)p_filterIndensityInNLEModel:(id)a0;
- (void)appendFilter:(id)a0 position:(double)a1 isLeftFilter:(BOOL)a2;
- (void)addLeftOrRightComposerFilter:(id)a0 intensity:(float)a1;
- (void)removeNLEFilterEffect:(id)a0;
- (void)addNormalFilter:(id)a0 intensity:(float)a1;
- (id)getExistFilterSlot:(id)a0;
- (void)p_removeFilters;
- (void)removeOldFilterIfNeed:(id)a0;
- (void)addComposerFilter:(id)a0 intensity:(float)a1 isGlobal:(BOOL)a2;
- (void).cxx_destruct;

@end
