@class NSString, APCDTOPoint;

@interface APCDTOEditorCanvasConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long canvasType;
@property (copy, nonatomic) NSString *topColor;
@property (copy, nonatomic) NSString *bottomColor;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double minScale;
@property (nonatomic) double maxScale;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) double borderSize;
@property (retain, nonatomic) APCDTOPoint *location;
@property (nonatomic) double blurRaidus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationJSONTransformer;
+ (id)canvasTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
