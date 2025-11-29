@class APCDTONormalizedLocation, NSString, APCDTOStickerOffsetFromCanvas, APCDTOGestureSupport, APCDTONormalizedSize;

@interface APCDTOBasicConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long imageIndex;
@property (nonatomic) double scale;
@property (nonatomic) BOOL showSelectedHint;
@property (retain, nonatomic) APCDTONormalizedLocation *location;
@property (retain, nonatomic) APCDTOGestureSupport *gestureSupport;
@property (nonatomic) BOOL deletable;
@property (nonatomic) BOOL editable;
@property (copy, nonatomic) NSString *group;
@property (nonatomic) double minimumScale;
@property (nonatomic) long long layerIndex;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (retain, nonatomic) APCDTOStickerOffsetFromCanvas *stickerOffsetFromCanvas;
@property (retain, nonatomic) APCDTONormalizedSize *normalizedSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationJSONTransformer;
+ (id)gestureSupportJSONTransformer;
+ (id)stickerOffsetFromCanvasJSONTransformer;
+ (id)normalizedSizeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
