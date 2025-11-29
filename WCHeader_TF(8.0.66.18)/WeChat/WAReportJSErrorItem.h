@class NSString;

@interface WAReportJSErrorItem : WAReportBaseItem

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *stack;
@property (nonatomic) unsigned int developerMarkedScene;
@property (copy, nonatomic) NSString *strPublibCustomVersion;
@property (copy, nonatomic) NSString *strPublibUpdateTime;
@property (nonatomic) unsigned long long launchStage;

- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
