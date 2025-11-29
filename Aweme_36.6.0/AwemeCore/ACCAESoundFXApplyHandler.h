@protocol AEKMegaEditor, AWEEditKit;

@interface ACCAESoundFXApplyHandler : NSObject

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<AWEEditKit> editKit;

- (void)clearSoundFX:(id)a0;
- (id)addNewSoundFXWithResource:(id)a0 configModel:(id)a1;
- (void)clearSoundFXWithIdentifier:(id)a0;
- (void)clearAllSoundFX;
- (id)createConfigModelFromSoundFX:(id)a0;
- (id)createResourceModelFromSoundFX:(id)a0;
- (id)JSONStringWithSoundFXModel:(id)a0;
- (id)soundFXModelWithJSONString:(id)a0;
- (void).cxx_destruct;

@end
