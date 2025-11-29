@class BizAcctActivity_ActivityInfo_BasicInfo, BizAcctActivity_ActivityInfo_PrizeInfo, BizAcctActivity_ActivityInfo_AntispamInfo;

@interface BizAcctActivity_ActivityInfo : WXPBGeneratedMessage

@property (retain, nonatomic) BizAcctActivity_ActivityInfo_BasicInfo *basicInfo;
@property (retain, nonatomic) BizAcctActivity_ActivityInfo_PrizeInfo *prizeInfo;
@property (retain, nonatomic) BizAcctActivity_ActivityInfo_AntispamInfo *antispamInfo;

+ (void)initialize;

@end
