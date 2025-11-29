@class NSString;

@interface AWEVideoPlayDanmakuSendResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *danmakuId;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *statusmsg;
@property (nonatomic) long long statuscode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
