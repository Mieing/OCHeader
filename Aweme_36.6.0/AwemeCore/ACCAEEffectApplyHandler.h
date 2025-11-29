@protocol AEKMegaEditor;

@interface ACCAEEffectApplyHandler : NSObject

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;

- (void)clearEffect:(id)a0;
- (id)addNewEffectWithResourceModel:(id)a0 configModel:(id)a1;
- (void)clearEffectWithIdentifier:(id)a0;
- (void)clearAllEffects;
- (id)transformResourceModelFromEffectModel:(id)a0;
- (id)createResourceModelFromEffect:(id)a0;
- (id)createConfigModelFromEffect:(id)a0;
- (void).cxx_destruct;
- (id)effectEditor;

@end
