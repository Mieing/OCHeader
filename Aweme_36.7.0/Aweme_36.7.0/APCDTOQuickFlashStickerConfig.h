@class APCDTONormalizedLocation, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, NSString, APCDTOQuickFlashStickerConfigExtension, NSNumber, NSArray;

@interface APCDTOQuickFlashStickerConfig : MTLModel <APCEditorStickerConfigProtocol, AWEStudioComposerModelExtension, MTLJSONSerializing>

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
@property (retain, nonatomic) APCDTOQuickFlashStickerConfigExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *textInfo;
@property (nonatomic) long long creatorUid;
@property (copy, nonatomic) NSArray *userInfos;
@property (retain, nonatomic) APCDTOBasicConfig *basic;
@property (nonatomic) long long flashStyleType;
@property (nonatomic) long long flashEditType;
@property (nonatomic) BOOL isUseMusic;
@property (copy, nonatomic) NSString *speakId;
@property (nonatomic) BOOL autoEdit;
@property (nonatomic) BOOL autoMerge;
@property (nonatomic) BOOL moveToAutoPlace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userInfosJSONTransformer;
+ (id)basicJSONTransformer;
+ (id)flashStyleTypeJSONTransformer;
+ (id)flashEditTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
