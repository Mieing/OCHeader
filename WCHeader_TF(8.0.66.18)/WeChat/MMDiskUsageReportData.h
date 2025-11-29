@class NSString, NSMutableDictionary;

@interface MMDiskUsageReportData : NSObject <PBCoding>

@property (nonatomic) unsigned int m_totalFileNum;
@property (nonatomic) unsigned long long m_totalFileSize;
@property (retain, nonatomic) NSMutableDictionary *m_dicBizStat;
@property (retain, nonatomic) NSMutableDictionary *m_dicFileTypeInUseStat;
@property (nonatomic) unsigned int m_scanStartTime;
@property (nonatomic) unsigned int m_scanEndTime;
@property (nonatomic) unsigned int m_scanUsedTime;
@property (nonatomic) unsigned int m_scanCount;
@property (nonatomic) unsigned int m_totalDelFileNum;
@property (nonatomic) unsigned long long m_totalDelFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_totalFileNum;
+ (void)PBArrayAdd_m_totalFileSize;
+ (void)PBArrayAdd_m_dicBizStat;
+ (void)PBArrayAdd_m_scanStartTime;
+ (void)PBArrayAdd_m_scanEndTime;
+ (void)PBArrayAdd_m_scanUsedTime;
+ (void)PBArrayAdd_m_scanCount;
+ (void)PBArrayAdd_m_totalDelFileNum;
+ (void)PBArrayAdd_m_totalDelFileSize;
+ (void)PBArrayAdd_m_dicFileTypeInUseStat;
+ (void)initialize;
+ (id)loadReportDataFromFile:(id)a0;
+ (BOOL)saveReportDataWithScanStat:(id)a0 toFilePath:(id)a1;

- (id)getPBPropertyTable;
- (id)genTotalStatString;
- (id)genStatString:(id)a0 bizTypeString:(id)a1;
- (id)genFileTypeInUseString:(id)a0 fileTypeString:(id)a1;
- (void).cxx_destruct;

@end
