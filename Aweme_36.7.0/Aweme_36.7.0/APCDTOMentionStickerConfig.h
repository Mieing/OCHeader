@class APCDTONormalizedLocation, APCDTOBasicConfig, APCDTOStickerOffsetFromCanvas, NSString, NSNumber, APCDTOUser;

@interface APCDTOMentionStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing>

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
@property (retain, nonatomic) APCDTOUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)basicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)socialStickerModel;
- (void).cxx_destruct;

@end
