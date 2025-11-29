@class NSMutableDictionary, NSMapTable, NLEInterface_OC, NSString;

@interface ACCNLEEditBeautyWrapper : NSObject <ACCEditBuildListener, ACCEditBeautyProtocol>

@property (weak, nonatomic) NLEInterface_OC *nle;
@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSMutableDictionary *ursDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onEditSessionInit:(id)a0;
- (void)onNLEEditorInit:(id)a0;
- (void)setEditSessionProvider:(id)a0;
- (void)removeComposerBeautyTrack:(id)a0;
- (id)trackForBeauty:(id)a0;
- (void)updateTrack:(id)a0 forBeauty:(id)a1;
- (void)addComposerBeautyTrack:(id)a0;
- (id)segmentForBeauty:(id)a0;
- (BOOL)isComposerBeautyTrack:(id)a0;
- (void)replaceComposerBeauty:(id)a0 withOld:(id)a1;
- (void)appendComposerBeautys:(id)a0;
- (void)removeBeautyEffects:(id)a0;
- (void)updateBeautyEffectItem:(id)a0 withEffect:(id)a1 ratio:(float)a2;
- (void)updateBeautyEffect:(id)a0;
- (void).cxx_destruct;

@end
