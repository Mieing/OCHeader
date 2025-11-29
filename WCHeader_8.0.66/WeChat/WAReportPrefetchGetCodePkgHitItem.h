@class NSString;

@interface WAReportPrefetchGetCodePkgHitItem : WAReportBaseItem

@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int isFirstHit;
@property (nonatomic) unsigned int reportId;
@property (nonatomic) unsigned int packageType;
@property (copy, nonatomic) NSString *moduleName;
@property (copy, nonatomic) NSString *instanceId;

@end
