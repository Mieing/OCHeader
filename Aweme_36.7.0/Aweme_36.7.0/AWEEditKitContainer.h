@protocol AEKMegaEditor;

@interface AWEEditKitContainer : IESStaticContainer

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;

- (id)provideSingleton:(id)a0 ACCBaseStickerAbility:(id)a1;
- (id)provideSingleton:(id)a0 ACCAutoCaptionAbility:(id)a1;
- (id)provideSingleton:(id)a0 ACCEffectCaptionAbility:(id)a1;
- (id)provideSingleton:(id)a0 ACCInfoStickerAbility:(id)a1;
- (id)provideSingleton:(id)a0 ACCTextAbility:(id)a1;
- (id)provideSingleton:(id)a0 ACCOldTextAbility:(id)a1;
- (id)provideSingleton:(id)a0 ACCSimpleTextAbility:(id)a1;
- (id)provideSingleton:(id)a0 AEKAudioAbility:(id)a1;
- (id)provideSingleton:(id)a0 AEKVideoAbility:(id)a1;
- (id)provideSingleton:(id)a0 AEKTrackBindingAbility:(id)a1;
- (void).cxx_destruct;

@end
