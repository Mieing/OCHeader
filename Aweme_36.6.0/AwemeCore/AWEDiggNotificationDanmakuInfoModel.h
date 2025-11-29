@class NSString;

@interface AWEDiggNotificationDanmakuInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *danmakuId;
@property (nonatomic) double offset;
@property (nonatomic) long long status;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
