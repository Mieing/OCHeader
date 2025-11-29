@class MMListenAudioBaseResponse, BaseResponse;

@interface MMListenAudioSettingResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenAudioBaseResponse *audioBaseResponse;

+ (void)initialize;

@end
