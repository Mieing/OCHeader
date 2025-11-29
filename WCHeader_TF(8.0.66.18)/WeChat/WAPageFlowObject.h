@class NSString;

@interface WAPageFlowObject : MMObject

@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) unsigned long long lastBecomeForgroundTime;
@property (nonatomic) unsigned long long stayTime;
@property (nonatomic) unsigned long long costTime;
@property (nonatomic) unsigned int lastClickTimeStamp;
@property (nonatomic) unsigned long long targetAction;
@property (copy, nonatomic) NSString *targetPagePath;
@property (copy, nonatomic) NSString *referPagePath;
@property (nonatomic) BOOL isEntrance;
@property (nonatomic) BOOL isReportBePoped;
@property (nonatomic) unsigned long long stayTimeAtFunctionalPageEnterGame;

- (void).cxx_destruct;

@end
