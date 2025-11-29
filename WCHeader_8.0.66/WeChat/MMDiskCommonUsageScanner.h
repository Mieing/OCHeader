@interface MMDiskCommonUsageScanner : NSObject

@property (nonatomic) unsigned long long totalSizeBytes;
@property (nonatomic) unsigned long long totalDelSizeBytes;
@property (nonatomic) unsigned int totalKiloSize;
@property (nonatomic) unsigned int totalDelKiloSize;
@property (nonatomic) unsigned int totalTime;

+ (unsigned long long)fileTimeFromTimeType:(long long)a0;
+ (unsigned long long)getMatchTime:(id)a0 withConfig:(id)a1;
+ (id)getNextFolderConfig:(id)a0 usageConfig:(id)a1;
+ (long long)latestTimeWithCurTime:(long long)a0 accessTime:(long long)a1 modifyTime:(long long)a2 changeTime:(long long)a3 birthTime:(long long)a4;

- (void)scanFolderBeginWithParentPath:(id)a0 usageConfig:(id)a1 depth:(unsigned long long)a2;
- (void)startScanWithRootPath:(id)a0 usageConfig:(id)a1;

@end
