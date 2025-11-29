@class NSArray;

@interface AFDLearnChannelListResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *channelList;

+ (id)channelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
