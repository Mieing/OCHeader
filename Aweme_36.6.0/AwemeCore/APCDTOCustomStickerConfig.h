@class APCDTONormalizedLocation, NSString, UIImage, NSData, APCDTOBasicConfig, NSArray, APCDTOStickerOffsetFromCanvas, NSNumber;

@interface APCDTOCustomStickerConfig : MTLModel <APCEditorStickerConfigProtocol, MTLJSONSerializing>

@property (retain, nonatomic) NSString *dataUIT;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSNumber *maxEdgeNumber;
@property (retain, nonatomic) NSNumber *acc_stickerType;
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
@property (copy, nonatomic) NSArray *imagePathList;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *extra2;
@property (copy, nonatomic) NSString *extra3;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)basicJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
