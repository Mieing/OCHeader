@class NSString, AWEURLModel;

@interface AWETeenDiscoverChannelModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEURLModel *titleIconUrl;
@property (nonatomic) long long channelType;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) long long channelKind;

+ (id)iconUrlJSONTransformer;
+ (id)titleIconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
