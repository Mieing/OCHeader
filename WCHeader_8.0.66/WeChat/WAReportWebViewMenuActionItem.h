@class NSString;

@interface WAReportWebViewMenuActionItem : WAReportBaseItem

@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *actionNote;
@property (nonatomic) unsigned int actionTimeStamp;
@property (nonatomic) unsigned long long actionResult;
@property (nonatomic) int errcode;

- (id)reportString;
- (void).cxx_destruct;

@end
