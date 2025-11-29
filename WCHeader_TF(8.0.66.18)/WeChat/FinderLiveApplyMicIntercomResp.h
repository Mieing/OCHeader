@class NSString, LiveSdkInfo, BaseResponse;

@interface FinderLiveApplyMicIntercomResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned long long serverMsgId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) LiveSdkInfo *liveSdkInfo;

+ (void)initialize;

@end
