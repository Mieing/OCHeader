@class NSString;

@interface WAReportPackageDeleteActionItem : WAReportBaseItem

@property (nonatomic) unsigned int deleteReason;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned int debugType;
@property (nonatomic) unsigned int deleteCount;
@property (nonatomic) unsigned int abtestStatus;
@property (nonatomic) unsigned int lruDeleteSize;
@property (nonatomic) unsigned int weappDirSizeBeforeLRUDelete;
@property (nonatomic) unsigned int weappDirSizePercentBeforeLRUDelete;
@property (nonatomic) unsigned int weappDirSizeAfterLRUDelete;
@property (nonatomic) unsigned int weappDirSizePercentAfterLRUDelete;
@property (nonatomic) unsigned int expiredDeleteSize;
@property (copy, nonatomic) NSString *appidList;

@end
