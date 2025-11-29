@class NSString;

@interface KvReportItem29900 : WAReportBaseItem

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned int appVersion;
@property (nonatomic) unsigned int appState;
@property (copy, nonatomic) NSString *instanceId;
@property (nonatomic) unsigned int appType;
@property (nonatomic) unsigned int isJitMode;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int actionScene;
@property (nonatomic) unsigned int actionResult;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
