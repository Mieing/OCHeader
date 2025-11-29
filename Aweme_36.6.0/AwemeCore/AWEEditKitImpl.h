@class NSString, AWEEditKitContainer, ACCStickerContainerView, AWEVideoPublishViewModel;
@protocol AEKMegaEditor, ACCOldTextAbility, ACCSimpleTextAbility, AEKAudioAbility, ACCBaseStickerAbility, AEKTrackBindingAbility, AEKVideoAbility, ACCAutoCaptionAbility, ACCTextAbility, ACCEffectCaptionAbility, ACCInfoStickerAbility;

@interface AWEEditKitImpl : NSObject <AWEEditKit>

@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) AWEEditKitContainer *abilitiesContainer;
@property (readonly, nonatomic) id<ACCBaseStickerAbility> baseStickerAbility;
@property (readonly, nonatomic) id<ACCInfoStickerAbility> infoStickerAbility;
@property (readonly, nonatomic) id<ACCTextAbility> textAbility;
@property (readonly, nonatomic) id<ACCOldTextAbility> oldTextAbility;
@property (readonly, nonatomic) id<ACCSimpleTextAbility> simpleTextAbility;
@property (readonly, nonatomic) id<ACCAutoCaptionAbility> autoCaptionAbility;
@property (readonly, nonatomic) id<ACCEffectCaptionAbility> effectCaptionAbility;
@property (readonly, weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (readonly, nonatomic) id<AEKAudioAbility> audioAbility;
@property (readonly, nonatomic) id<AEKVideoAbility> videoAbility;
@property (readonly, nonatomic) id<AEKTrackBindingAbility> trackBindingAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindingStickerContainer:(id)a0;
- (id)initWithMegaEditor:(id)a0;
- (id)initWithPublishViewModel:(id)a0;
- (void)registerContext;
- (void).cxx_destruct;

@end
