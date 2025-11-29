@interface ChatBotReportData : NSObject

@property (readonly, nonatomic) unsigned int logId;

- (void)report;
- (id)getLogContent;

@end
