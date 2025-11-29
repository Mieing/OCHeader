@class NSString;

@interface WAReportWKWebViewTerminateItem : WAReportBaseItem

@property (nonatomic) long long publicLibVersion;
@property (nonatomic) unsigned long long runningState;
@property (nonatomic) long long stackCount;
@property (nonatomic) long long stackIndex;
@property (nonatomic) unsigned long long tereminateType;
@property (nonatomic) unsigned long long memoryWarningType;
@property (copy, nonatomic) NSString *stackTopPagePath;

- (id)reportString;
- (void).cxx_destruct;

@end
