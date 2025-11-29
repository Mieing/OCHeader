@class NSString;

@interface WAReportSplitPluginCodeStatisItem : WAReportBaseItem

@property (copy, nonatomic) NSString *provider;
@property (nonatomic) long long version;
@property (nonatomic) long long stage;
@property (copy, nonatomic) NSString *instanceId;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
