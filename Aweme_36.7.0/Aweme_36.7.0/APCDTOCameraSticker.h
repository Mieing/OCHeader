@class APCDTOQuickFlashStickerConfig, NSString, APCDTONewHashtagStickerConfig, APCDTOCameraStickerExtension;

@interface APCDTOCameraSticker : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOCameraStickerExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) APCDTOQuickFlashStickerConfig *quickFlashSticker;
@property (retain, nonatomic) APCDTONewHashtagStickerConfig *reserved_kw_newHashtagSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)quickFlashStickerJSONTransformer;
+ (id)reserved_kw_newHashtagStickerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
