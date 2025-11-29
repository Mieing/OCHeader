@class NSArray;

@interface AWETeenInerestChannelListResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *channelList;

+ (id)channelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
