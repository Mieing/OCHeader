@class NSString;

@interface WAReportAppTaskUpdateResultAfterVersionFallbackItem : WAReportBaseItem

@property (nonatomic) unsigned int targetAppVersion;
@property (nonatomic) unsigned int localAppVersion;
@property (nonatomic) unsigned long long fallbackScene;
@property (nonatomic) unsigned int waitTimeInMs;
@property (copy, nonatomic) NSString *netType;
@property (nonatomic) BOOL isWeakNet;
@property (nonatomic) unsigned long long updateResult;
@property (nonatomic) unsigned int updateCostTimeInMs;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
