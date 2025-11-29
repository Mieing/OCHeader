@class APCDTONormalizedLocation, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, AWEStoryColor, NSString, NSNumber, NSArray;

@interface APCDTOTextStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing>

@property (retain, nonatomic) AWEStoryColor *colorModel;
@property (nonatomic) BOOL isTaskSticker;
@property (nonatomic) BOOL isAutoAdded;
@property (retain, nonatomic) APCDTOBasicConfig *basic;
@property (retain, nonatomic) APCDTONormalizedLocation *location;
@property (retain, nonatomic) APCDTOStickerOffsetFromCanvas *stickerOffsetFromCanvas;
@property (nonatomic) long long supportedGestureType;
@property (nonatomic) BOOL deleteable;
@property (nonatomic) BOOL editable;
@property (retain, nonatomic) NSNumber *groupId;
@property (nonatomic) double minimumScale;
@property (nonatomic) long long layerIndex;
@property (nonatomic) BOOL showSelectedHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) APCDTOBasicConfig *basic;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textStyle;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSArray *extraInfos;
@property (nonatomic) long long align;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textStyleJSONTransformer;
+ (id)basicJSONTransformer;
+ (id)extraInfosJSONTransformer;
+ (id)alignJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)textModel;
- (BOOL)isBasedOnCanvasPositioning;
- (unsigned long long)textModelTextStyle;
- (id)addHashtagExtraWithHashtagName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)init;

@end
