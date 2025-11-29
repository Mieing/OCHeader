@class NSString;

@interface AWEDTOLocationInfoEntry : MTLModel <MTLJSONSerializing>

@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double transformX;
@property (nonatomic) double transformY;
@property (nonatomic) BOOL isRationCoord;
@property (nonatomic) double canvasRatio;
@property (nonatomic) double iosTransformY;
@property (nonatomic) BOOL isLeftAxis;
@property (nonatomic) double maxTBPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
