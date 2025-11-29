@class VoIPMtUserInfo, BaseRequest, NSString, NSData;

@interface VoIPMtSendBannerMsgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *wxGroupid;
@property (retain, nonatomic) NSData *bannerMsg;
@property (retain, nonatomic) VoIPMtUserInfo *fromUser;

+ (void)initialize;

@end
