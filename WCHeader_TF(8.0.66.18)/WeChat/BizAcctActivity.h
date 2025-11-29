@class BizAcctActivity_ActivityInfo, BizAcctActivity_ClientInfo, BizAcctActivity_FrontendInfo;

@interface BizAcctActivity : WXPBGeneratedMessage

@property (nonatomic) unsigned long long activityId;
@property (nonatomic) unsigned long long bizuin;
@property (nonatomic) unsigned int promoteType;
@property (retain, nonatomic) BizAcctActivity_ActivityInfo *info;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) BizAcctActivity_ClientInfo *clientInfo;
@property (retain, nonatomic) BizAcctActivity_FrontendInfo *frontendInfo;

+ (void)initialize;

@end
