@class APCDTONormalizedLocation, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, NSString, NSArray, NSNumber;

@interface APCDTOPoiStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing>

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
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSArray *styleEffectIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)POIModel;
- (void).cxx_destruct;

@end
