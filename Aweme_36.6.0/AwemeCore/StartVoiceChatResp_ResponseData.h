@class NSString;

@interface StartVoiceChatResp_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcRoomId;
@property (nonatomic) long long sessionId;
@property (nonatomic) long long startTime;
@property (nonatomic) long long countDown;
@property (copy, nonatomic) NSString *rtcBusinessId;

+ (id)descriptor;

@end
