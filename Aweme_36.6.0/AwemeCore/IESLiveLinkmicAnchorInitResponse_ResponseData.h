@class NSString;

@interface IESLiveLinkmicAnchorInitResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (nonatomic) int vendor;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (copy, nonatomic) NSString *channelIdStr;

+ (id)descriptor;

@end
