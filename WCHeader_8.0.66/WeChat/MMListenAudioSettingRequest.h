@class BaseRequest, MMListenAudioBaseRequest, NSMutableArray, MMListenAudioRecommendSetting;

@interface MMListenAudioSettingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) MMListenAudioBaseRequest *audioBaseRequest;
@property (retain, nonatomic) NSMutableArray *settingType;
@property (retain, nonatomic) MMListenAudioRecommendSetting *recommendSetting;

+ (void)initialize;

@end
