@class NSString;

@interface WAReportWebViewPVItem : WAReportBaseItem

@property (nonatomic) unsigned long long costtime;
@property (nonatomic) unsigned long long staytime;
@property (copy, nonatomic) NSString *referpagepath;
@property (nonatomic) unsigned long long targetAction;
@property (copy, nonatomic) NSString *targetpagepath;
@property (nonatomic) unsigned long long clickTimestamp;
@property (nonatomic) unsigned int publicLibVersion;
@property (copy, nonatomic) NSString *referAction;
@property (nonatomic) unsigned long long staytimeFuncpageStart;

- (id)reportString;
- (void).cxx_destruct;

@end
