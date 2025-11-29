@class NSString;

@interface IESLiveLinkMicAudienceOrderSingRtcInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (nonatomic) BOOL needMixStream;
@property (copy, nonatomic) NSString *rtcUserOpenId;

+ (id)descriptor;

@end
