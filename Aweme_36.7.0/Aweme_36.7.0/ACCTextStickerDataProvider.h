@class NSString;
@protocol ACCEditAudioEffectProtocol, ACCEditTransitionServiceProtocol, ACCStickerServiceProtocol, IESServiceProvider, AWEEditKit, ACCEditServiceProtocol;

@interface ACCTextStickerDataProvider : ACCBaseStickerDataProvider <ACCTextStickerDataProvider>

@property (weak, nonatomic) id<ACCEditAudioEffectProtocol> audioEffectService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isImageAlbumEdit;
- (BOOL)isClipVideoReedit;
- (id)currentTaskId;
- (void)storeTextInfoForAuditWith:(id)a0 imageTextFonts:(id)a1 imageTextFontEffectIds:(id)a2 imageTextRecommendIds:(id)a3 imageTextRecommendTypes:(id)a4;
- (void)clearTextMode;
- (BOOL)supportTextReading;
- (void)removeTextReadForKey:(id)a0;
- (void)addTextReadForKey:(id)a0 asset:(id)a1 range:(id)a2 slotId:(id)a3 ttsBindingId:(id)a4 speakerEffectName:(id)a5 presetUUID:(id)a6;
- (id)textStickerFolderForDraft;
- (id)textStickerImagePathForDraftWithIndex:(long long)a0;
- (id)textStickerImageNameForDraftWithIndex:(long long)a0;
- (void)storeTextInfoForAuditWith:(id)a0 imageTextFonts:(id)a1 imageTextFontEffectIds:(id)a2;
- (void)removeTextReadWithAudioPath:(id)a0;
- (id)textReadAssetWithKey:(id)a0;
- (void)showTextReaderSoundEffectsSelectionViewController;
- (void).cxx_destruct;

@end
