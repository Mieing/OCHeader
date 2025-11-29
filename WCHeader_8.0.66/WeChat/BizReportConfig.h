@class NSString;

@interface BizReportConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int holdSecAfterUserLeaveForReport;
@property (nonatomic) unsigned int reportArticleJumpPathDepth;
@property (nonatomic) unsigned int reportShowBatchSize;
@property (retain, nonatomic) NSString *reportShowStrategyInfo;

+ (void)initialize;

- (void)setReportShowStrategyInfo:(id)a0;
- (id)reportShowStrategyInfo;
- (void)setReportShowBatchSize:(unsigned int)a0;
- (unsigned int)reportShowBatchSize;
- (void)setReportArticleJumpPathDepth:(unsigned int)a0;
- (unsigned int)reportArticleJumpPathDepth;
- (void)setHoldSecAfterUserLeaveForReport:(unsigned int)a0;
- (unsigned int)holdSecAfterUserLeaveForReport;

@end
