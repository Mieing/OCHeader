@interface CgiReportItemConfig : NSObject

@property (nonatomic) BOOL needReport;
@property (nonatomic) unsigned int middleActionType;
@property (nonatomic) unsigned long long intervalMs;

- (id)description;

@end
