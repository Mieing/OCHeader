@class NSString;

@interface IESLiveLinkMicAudienceOrderSingGenStreamInfoResponse_OrderSingStreamInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcRoomId;
@property (copy, nonatomic) NSString *rtcUserId;
@property (copy, nonatomic) NSString *rtcAppId;
@property (copy, nonatomic) NSString *mixStreamTaskId;
@property (copy, nonatomic) NSString *publicStreamId;
@property (copy, nonatomic) NSString *rtcUserOpenId;

+ (id)descriptor;

@end
