@class ACCEditorStickerConfigAssembler, NSString, NSArray, NSMutableDictionary, NSDictionary, NSMutableArray, NSData;
@protocol ACCPublishRepository, ACCEditorCore;

@interface ACCRepoStickerInstanceModel : NSObject <ACCRepoDataDiff, AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated, NSCopying, ACCRepositoryContextDeprecated, ACCRepoStickerInstanceData, ACCRepoRegister, ACCEditorCoreAccess>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *interactionStickers;
@property (copy, nonatomic) NSArray *interactionStickersForSilence;
@property (copy, nonatomic) NSString *interactionStickersString;
@property (retain, nonatomic) NSArray *transferStickers;
@property (retain, nonatomic) NSMutableDictionary *textReadingAssets;
@property (retain, nonatomic) NSMutableDictionary *textReadingRanges;
@property (copy, nonatomic) NSDictionary *textReadingURLs;
@property (retain, nonatomic) NSMutableArray *infoStickerArray;
@property (retain, nonatomic) NSData *infoStickersJson;
@property (copy, nonatomic) NSString *presetResourceId;
@property (retain, nonatomic) NSString *imageText;
@property (copy, nonatomic) NSString *imageTextFonts;
@property (copy, nonatomic) NSString *imageTextFontEffectIds;
@property (nonatomic) BOOL adjustTo9V16EditFrame;
@property (nonatomic) BOOL allStickerInPlayer;
@property (nonatomic) unsigned long long countForText;
@property (nonatomic) unsigned long long countForTextTemplate;
@property (nonatomic) long long instanceStickerCount;
@property (retain, nonatomic) ACCEditorStickerConfigAssembler *instanceStickerConfigAssembler;
@property (copy, nonatomic) NSDictionary *templateTextReadMap;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<ACCEditorCore> editorCore;

+ (id)repo_dataProtocol;

- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)editDiffs;
- (BOOL)hasTextReading;
- (id)fixedDraftPathFromPath:(id)a0 draftID:(id)a1;
- (id)textReadingAssetsInfo;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (id)infoStickerChallengeNames;
- (id)infoStickerChallengeIDs;
- (id)audioAssetInVideoDataWithKey:(id)a0;
- (id)allAudioAssetsInVideoData;
- (void)addInteractionStickerTitle:(id)a0;
- (void)addInteractionStickerWithFlashMobConfig:(id)a0;
- (BOOL)hasNativeSticker;
- (void)removeTextReadingInCurrentVideo;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
