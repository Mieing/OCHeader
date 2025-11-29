@class NSString;

@interface BizReportConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int holdSecAfterUserLeaveForReport;
@property (nonatomic) unsigned int reportArticleJumpPathDepth;
@property (nonatomic) unsigned int reportShowBatchSize;
@property (retain, nonatomic) NSString *reportShowStrategyInfo;

+ (void)initialize;

@end
