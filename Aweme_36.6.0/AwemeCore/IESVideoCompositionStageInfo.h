@class NSArray, NSDictionary, NSString;

@interface IESVideoCompositionStageInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (copy, nonatomic) NSArray *layerNames;
@property (copy, nonatomic) NSDictionary *opacityRamps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)timeRangeJSONTransformer;
+ (id)opacityRampsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
