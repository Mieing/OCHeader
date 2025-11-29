@class NSArray, NSString;

@interface AWETeenDiscoverChannelResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *channelList;
@property (copy, nonatomic) NSString *ageDefaultString;

+ (id)channelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
