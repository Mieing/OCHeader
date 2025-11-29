@interface WAReportPackageCheckAction : WAReportBaseItem

@property (nonatomic) unsigned int allPackageSize;
@property (nonatomic) unsigned int allPackageClientStoragePercent;
@property (nonatomic) unsigned int clientStorageFreePercent;
@property (nonatomic) unsigned int abtestStatus;
@property (nonatomic) unsigned int weappCountThatHasPackage;
@property (nonatomic) unsigned int costTime;
@property (nonatomic) BOOL stopByEnterForeground;
@property (nonatomic) unsigned int publibCount;
@property (nonatomic) unsigned long long jsCodeCacheSizeInBytes;
@property (nonatomic) unsigned long long costTimeInMs;

- (id)reportString;

@end
