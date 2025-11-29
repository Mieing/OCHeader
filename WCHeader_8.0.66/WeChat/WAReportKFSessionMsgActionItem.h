@class NSString;

@interface WAReportKFSessionMsgActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long eventID;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned int eventTime;

- (id)reportString;
- (void).cxx_destruct;

@end
