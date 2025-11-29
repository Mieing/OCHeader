@class NSString;

@interface WAReportPrefetchGetCodeResultItem : WAReportBaseItem

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int isEncrypt;
@property (nonatomic) unsigned int networkEnvType;
@property (nonatomic) unsigned int isSuccess;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) unsigned int cmdSequence;
@property (nonatomic) unsigned int reportId;
@property (copy, nonatomic) NSString *prefetchId;

- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (void).cxx_destruct;

@end
