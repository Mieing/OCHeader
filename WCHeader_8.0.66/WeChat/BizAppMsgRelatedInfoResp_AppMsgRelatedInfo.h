@class NSString, BizAppMsgRelatedInfoResp_AppMsgFriendInfo, BizAppMsgRelatedInfoResp_AppMsgPayInfo;

@interface BizAppMsgRelatedInfoResp_AppMsgRelatedInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *friendReadCountStr;
@property (retain, nonatomic) BizAppMsgRelatedInfoResp_AppMsgPayInfo *payInfo;
@property (retain, nonatomic) BizAppMsgRelatedInfoResp_AppMsgFriendInfo *friendInfo;
@property (retain, nonatomic) NSString *wordingReportInfo;

+ (void)initialize;

@end
