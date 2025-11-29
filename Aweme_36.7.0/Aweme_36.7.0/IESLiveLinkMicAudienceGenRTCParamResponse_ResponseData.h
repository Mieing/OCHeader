@class NSString;

@interface IESLiveLinkMicAudienceGenRTCParamResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *rtcToken;
@property (copy, nonatomic) NSString *rtcUserOpenId;

+ (id)descriptor;

@end
