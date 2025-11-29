@class NSString, NSNumber;

@interface AWELongVideoAdEpisodeAwardInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) double watchDuration;
@property (copy, nonatomic) NSString *sendUniqId;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *sign;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (retain, nonatomic) NSNumber *spuId;
@property (retain, nonatomic) NSNumber *skuId;
@property (retain, nonatomic) NSString *spuIdStr;
@property (retain, nonatomic) NSString *skuIdStr;
@property (nonatomic) long long bizType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spuIdJSONTransformer;
+ (id)skuIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
