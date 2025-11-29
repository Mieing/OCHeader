@class NSString, NSArray;

@interface AWETeenInerestChannelListResponseModel : AWEBaseApiModel

@property (nonatomic) unsigned long long channelStatusCode;
@property (copy, nonatomic) NSString *channelStatusMessage;
@property (copy, nonatomic) NSArray *channelList;

+ (id)channelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
