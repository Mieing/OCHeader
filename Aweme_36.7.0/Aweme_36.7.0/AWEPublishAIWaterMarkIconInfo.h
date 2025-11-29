@class NSArray, NSString;

@interface AWEPublishAIWaterMarkIconInfo : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *waterMarkIcons;
@property (nonatomic) double targetWidthRatio;
@property (nonatomic) double targetX;
@property (nonatomic) double targetY;
@property (copy, nonatomic) NSString *coordinateSystem;
@property (nonatomic) double startDurationRatio;
@property (nonatomic) double endDurationRatio;
@property (nonatomic) long long refreshInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)waterMarkIconsJSONTransformer;
+ (id)targetWidthRatioJSONTransformer;
+ (id)targetXJSONTransformer;
+ (id)targetYJSONTransformer;
+ (id)startDurationRatioJSONTransformer;
+ (id)endDurationRatioJSONTransformer;
+ (id)refreshIntervalJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)allWaterMarkImages;
- (void).cxx_destruct;
- (id)defaultIcon;

@end
