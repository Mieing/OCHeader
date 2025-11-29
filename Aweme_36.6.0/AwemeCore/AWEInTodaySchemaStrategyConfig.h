@class NSString, NSArray;

@interface AWEInTodaySchemaStrategyConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long pastType;
@property (copy, nonatomic) NSString *aggregatedDateRange;
@property (nonatomic) BOOL aggregateVideo;
@property (nonatomic) long long maxVideoDuration;
@property (nonatomic) BOOL aggregateImage;
@property (nonatomic) BOOL sortCreateTime;
@property (nonatomic) long long maxAssetsCount;
@property (copy, nonatomic) NSArray *tagWeightList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagWeightListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
