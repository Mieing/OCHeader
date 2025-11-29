@class APCDTOLyricStickerConfig, NSMutableArray, APCDTOPoiStickerConfig;

@interface ACCEditorStickerConfigAssembler : NSObject

@property (retain, nonatomic) NSMutableArray *infoStickerList;
@property (retain, nonatomic) APCDTOPoiStickerConfig *modernPOISticker;
@property (retain, nonatomic) NSMutableArray *textStickerList;
@property (retain, nonatomic) APCDTOLyricStickerConfig *lyricsStickerConfig;
@property (retain, nonatomic) NSMutableArray *quickFlashStickerList;

- (void)addTextSticker:(id /* block */)a0;
- (void)addCustomSticker:(id /* block */)a0;
- (void)addInfoSticker:(id /* block */)a0;
- (void)addTextStickerConfig:(id)a0;
- (void)addMentionSticker:(id /* block */)a0;
- (void)addHashtagSticker:(id /* block */)a0;
- (BOOL)addPOISticker:(id /* block */)a0;
- (void)setupLyricsSticker:(id /* block */)a0;
- (void)prepareOnCompletion:(id /* block */)a0;
- (void)addStickersFromStickerConfig:(id)a0;
- (void)setupInitialState:(id)a0;
- (id)textStickerConfigList;
- (void)dispatchEffectModel:(id)a0;
- (void)removeTextStickerConfig:(id)a0;
- (void)removeQuickFlashStickerConfigs;
- (void)addStickersFromParameteriedConfig:(id)a0;
- (void)addGlobalStickersFromGlobalStickerConfig:(id)a0;
- (id)infoStickerConfigList;
- (id)modernPOIStickerConfig;
- (id)quickFlashStickerConfigList;
- (void).cxx_destruct;
- (id)init;

@end
