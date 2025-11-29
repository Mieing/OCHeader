@class NSString, NSMutableDictionary;

@interface AWEBarItemResourceConfigStoryStyleEditManagerImpl : NSObject <ACCBarItemResourceConfigManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *configHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allowListInPureMode;
- (id)configForIdentifier:(void *)a0;
- (void)setupBarItemConfig;
- (id)redpacketResourceConfig;
- (id)karaokeEditConfig;
- (id)filterResourceConfig;
- (id)clipResourceConfig;
- (id)chapterResourceConfig;
- (id)brushResourceConfig;
- (id)selectTemplateResourceConfig;
- (id)oneClickFilmResourceConfig;
- (id)imageTemplateResourceConfig;
- (id)HDRResourceConfig;
- (id)voiceChangerResourceConfig;
- (id)dubResourceConfig;
- (id)autoCaptionResourceConfig;
- (id)editVolumnResourceConfig;
- (id)cutMusicResourceConfig;
- (id)musicResourceConfig;
- (id)specialEffectResourceConfig;
- (id)textStickerResourceConfig;
- (id)stickerResourceConfig;
- (id)customStickerConfig;
- (id)fansInteractionStickerResourceConfig;
- (id)tagsResourceConfig;
- (id)cropImageResourceConfig;
- (id)aiExpandResourceConfig;
- (id)aiEraserConfig;
- (id)shareEditConfig;
- (id)publishSettingsConfig;
- (void).cxx_destruct;
- (id)init;

@end
