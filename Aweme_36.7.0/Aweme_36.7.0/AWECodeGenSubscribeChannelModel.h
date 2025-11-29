@class NSString;

@interface AWECodeGenSubscribeChannelModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *textDesc;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long subStatus;
@property (nonatomic) long long defaultShowStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
