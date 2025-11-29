@class BaseRequest, BizPersonalCenterReqInfo, VideoChannelReqInfo;

@interface BizStrategyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) VideoChannelReqInfo *videoChannelInfo;
@property (retain, nonatomic) BizPersonalCenterReqInfo *bizPersonalCenterInfo;

+ (void)initialize;

@end
