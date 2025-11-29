@class APCDTONormalizedLocation, NSArray, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, IESEffectModel, NSNumber, NSString;

@interface APCDTOLyricStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing>

@property (retain, nonatomic) IESEffectModel *downloadedEffect;
@property (copy, nonatomic) NSArray *effectInfos;
@property (nonatomic) BOOL isFromMusicShare;
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
@property (copy, nonatomic) NSString *effectIdentifer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
