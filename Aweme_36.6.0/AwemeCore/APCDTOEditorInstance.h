@class APCDTOFilterConfig, APCDTOEditorResource, APCDTORichText, APCDTOEditorCanvasConfig, APCDTOStickersConfig, NSString;

@interface APCDTOEditorInstance : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) APCDTOEditorResource *resource;
@property (retain, nonatomic) APCDTOFilterConfig *filterConfig;
@property (retain, nonatomic) APCDTOStickersConfig *stickerConfig;
@property (retain, nonatomic) APCDTORichText *richText;
@property (retain, nonatomic) APCDTOEditorCanvasConfig *canvasConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceJSONTransformer;
+ (id)stickerConfigJSONTransformer;
+ (id)richTextJSONTransformer;
+ (id)filterConfigJSONTransformer;
+ (id)canvasConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
