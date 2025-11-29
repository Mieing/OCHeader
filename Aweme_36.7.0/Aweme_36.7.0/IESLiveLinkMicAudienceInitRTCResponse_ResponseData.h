@class NSString;

@interface IESLiveLinkMicAudienceInitRTCResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (copy, nonatomic) NSString *rtcUserId;

+ (id)descriptor;

@end
