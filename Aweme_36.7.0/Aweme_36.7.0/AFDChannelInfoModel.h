@class NSString;

@interface AFDChannelInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) long long channelId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
