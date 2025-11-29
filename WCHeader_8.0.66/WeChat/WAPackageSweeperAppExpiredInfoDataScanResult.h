@class NSArray, WAInfoData, NSMutableArray;

@interface WAPackageSweeperAppExpiredInfoDataScanResult : NSObject

@property (nonatomic) unsigned long long totalExpiredPackageSize;
@property (retain, nonatomic) NSArray *arrExpiredPackageFilePaths;
@property (retain, nonatomic) WAInfoData *expiredFullInfoData;
@property (retain, nonatomic) NSMutableArray *arrExpiredModuleInfoData;

- (void).cxx_destruct;

@end
