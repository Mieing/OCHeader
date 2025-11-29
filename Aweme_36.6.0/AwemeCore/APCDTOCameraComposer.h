@class APCDTOMode, APCDTOFeature, APCDTODemonstrationContent, NSString, APCDTOCameraComposerExtension, APCDTOCameraMusic, APCDTOToolsBar, APCDTODuetMovie, APCDTOCameraSticker, APCDTOEffect;

@interface APCDTOCameraComposer : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOCameraComposerExtension *extension;
@property (retain, nonatomic) APCDTOCameraMusic *music;
@property (retain, nonatomic) APCDTOEffect *effect;
@property (retain, nonatomic) APCDTOCameraSticker *stickerConfig;
@property (retain, nonatomic) APCDTODuetMovie *duetMovie;
@property (retain, nonatomic) APCDTOFeature *feature;
@property (retain, nonatomic) APCDTOToolsBar *toolsBar;
@property (retain, nonatomic) APCDTOMode *mode;
@property (retain, nonatomic) APCDTODemonstrationContent *demonstrationContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)musicJSONTransformer;
+ (id)demonstrationContentJSONTransformer;
+ (id)effectJSONTransformer;
+ (id)stickerConfigJSONTransformer;
+ (id)duetMovieJSONTransformer;
+ (id)featureJSONTransformer;
+ (id)toolsBarJSONTransformer;
+ (id)modeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)buildMusicConfig:(id /* block */)a0;
- (void)buildPropConfig:(id /* block */)a0;
- (void)buildStickerConfig:(id /* block */)a0;
- (void)buildDuetConfig:(id /* block */)a0;
- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
