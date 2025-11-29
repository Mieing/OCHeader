@class BaseRequest, BizPersonalCenterReqInfo, VideoChannelReqInfo;

@interface BizStrategyReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) VideoChannelReqInfo *videoChannelInfo;
@property (retain, nonatomic) BizPersonalCenterReqInfo *bizPersonalCenterInfo;

+ (void)initialize;

- (void)setBizPersonalCenterInfo:(id)a0;
- (id)bizPersonalCenterInfo;
- (void)setVideoChannelInfo:(id)a0;
- (id)videoChannelInfo;
- (void)setReqType:(unsigned int)a0;
- (unsigned int)reqType;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
