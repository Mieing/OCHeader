@class NSString;

@interface BizAppMsgRelatedInfoResp_AppMsgPayInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int isChargeAppMsg;
@property (nonatomic) unsigned int isPaid;
@property (retain, nonatomic) NSString *friendPayCountStr;

+ (void)initialize;

@end
