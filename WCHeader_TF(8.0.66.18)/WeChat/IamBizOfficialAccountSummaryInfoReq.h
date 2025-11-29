@class NSString;

@interface IamBizOfficialAccountSummaryInfoReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int convTime;
@property (retain, nonatomic) NSString *msgContactNickName;
@property (retain, nonatomic) NSString *msgNotifyNickName;
@property (retain, nonatomic) NSString *convDigest;
@property (nonatomic) unsigned int convMsgType;

+ (void)initialize;

@end
