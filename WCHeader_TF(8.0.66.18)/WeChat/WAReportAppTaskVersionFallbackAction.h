@class NSString;

@interface WAReportAppTaskVersionFallbackAction : WAReportBaseItem

@property (nonatomic) unsigned int targetAppVersion;
@property (nonatomic) unsigned int localAppVersion;
@property (nonatomic) unsigned long long fallbackScene;
@property (nonatomic) unsigned int waitTimeInMs;
@property (copy, nonatomic) NSString *netType;
@property (nonatomic) BOOL isWeakNet;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
