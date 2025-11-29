@class MMListenMusicChatConfig, MMListenUserConfig, BaseResponse;

@interface MMListenGetUserConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenUserConfig *userConfig;
@property (retain, nonatomic) MMListenMusicChatConfig *musicChatConfig;

+ (void)initialize;

@end
