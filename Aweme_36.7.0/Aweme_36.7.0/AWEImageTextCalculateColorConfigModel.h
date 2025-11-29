@class NSArray, NSString;

@interface AWEImageTextCalculateColorConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long style;
@property (nonatomic) double upperMinSaturation;
@property (nonatomic) double upperMaxSaturation;
@property (nonatomic) double lowerMinSaturation;
@property (nonatomic) double lowerMaxSaturation;
@property (nonatomic) double upperMinBrightness;
@property (nonatomic) double upperMaxBrightness;
@property (nonatomic) double lowerMinBrightness;
@property (nonatomic) double lowerMaxBrightness;
@property (nonatomic) double upperRatioSaturation;
@property (nonatomic) double upperRatioBrightness;
@property (nonatomic) double lowerRatioSaturation;
@property (nonatomic) double lowerRatioBrightness;
@property (nonatomic) double upperLocationOffset;
@property (nonatomic) double lowerLocationOffset;
@property (nonatomic) double throttlerTime;
@property (nonatomic) BOOL horizontalPreloadEnable;
@property (nonatomic) long long horizontalLeftPreloadCount;
@property (nonatomic) long long horizontalRightPreloadCount;
@property (copy, nonatomic) NSArray *blackScenes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
