@class NSArray;

@interface AWESocialHeartbeatModel : AWEBaseApiModel

@property (nonatomic) long long heatbeatInterval;
@property (retain, nonatomic) NSArray *nearbyBubbleInfoList;

+ (id)nearbyBubbleInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
