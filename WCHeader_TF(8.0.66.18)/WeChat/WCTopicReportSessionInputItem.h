@interface WCTopicReportSessionInputItem : WCTopicReportBaseItem

@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int content;

- (void)resetRequestId;
- (void)clearMembersAfterReport;
- (unsigned int)enterScene;

@end
