@class APCDTOBizData, APCDTOCanvas, APCDTOFilterConfig, APCDTORichText, APCDTOImageAlbum, APCDTOMusic, APCDTOEditFlowControl, APCDTODownloadInfo, APCDTOText, NSString, APCDTOStickersConfig, APCDTOImport;

@interface APCDTOEditComposerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOCanvas *canvas;
@property (retain, nonatomic) APCDTOImageAlbum *imageAlbum;
@property (retain, nonatomic) APCDTOMusic *music;
@property (retain, nonatomic) APCDTOStickersConfig *stickerConfig;
@property (retain, nonatomic) APCDTOBizData *bizData;
@property (retain, nonatomic) APCDTOImport *import;
@property (retain, nonatomic) APCDTOFilterConfig *filterConfig;
@property (retain, nonatomic) APCDTOText *text;
@property (retain, nonatomic) APCDTOEditFlowControl *editFlowControl;
@property (retain, nonatomic) APCDTORichText *richText;
@property (retain, nonatomic) APCDTODownloadInfo *downloadVideoInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicJSONTransformer;
+ (id)importJSONTransformer;
+ (id)bizDataJSONTransformer;
+ (id)stickerConfigJSONTransformer;
+ (id)richTextJSONTransformer;
+ (id)canvasJSONTransformer;
+ (id)imageAlbumJSONTransformer;
+ (id)filterConfigJSONTransformer;
+ (id)editFlowControlJSONTransformer;
+ (id)downloadVideoInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)textJSONTransformer;

- (void)setupVideoWithCanvas:(id /* block */)a0;
- (void)setupMusic:(id /* block */)a0;
- (void)setupEditFlowControl:(id /* block */)a0;
- (void)addTextSticker:(id /* block */)a0;
- (void)setupCanvas:(id)a0;
- (void)setupText:(id /* block */)a0;
- (void)setupRichText:(id /* block */)a0;
- (void)setupVideoWithImport:(id /* block */)a0;
- (void)setupImageAlbum:(id /* block */)a0;
- (void)addCustomSticker:(id /* block */)a0;
- (void)setupMusicModel:(id)a0;
- (void)setupBizData:(id /* block */)a0;
- (void)addInfoSticker:(id /* block */)a0;
- (void)addTextStickerConfig:(id)a0;
- (void)addMentionSticker:(id /* block */)a0;
- (void)addHashtagSticker:(id /* block */)a0;
- (void)addHashtagStickerConfig:(id)a0;
- (void)addPOISticker:(id /* block */)a0;
- (void)setupLyricsSticker:(id /* block */)a0;
- (void)addQuickFlashSticker:(id /* block */)a0;
- (void)setupFilter:(id /* block */)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
