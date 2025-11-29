@class NSString;

@interface MMDiskUsageStatus : NSObject <PBCoding>

@property (nonatomic) unsigned int m_lastStartScanTime;
@property (nonatomic) unsigned int m_lastReportTime;
@property (nonatomic) unsigned int m_lastScanFinishTime;
@property (nonatomic) unsigned int m_lastCleanTmpTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_lastStartScanTime;
+ (void)PBArrayAdd_m_lastReportTime;
+ (void)PBArrayAdd_m_lastScanFinishTime;
+ (void)PBArrayAdd_m_lastCleanTmpTime;
+ (void)initialize;
+ (id)loadStausDataFromFile;

@end
