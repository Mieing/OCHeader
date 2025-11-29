@interface MMDiskUsageConfigHandler : NSObject

@property (nonatomic) unsigned int m_timeIntervalBetweenReport;
@property (nonatomic) unsigned int m_timeIntervalBetweenScan;
@property (nonatomic) unsigned int m_timeForEachScan;
@property (nonatomic) unsigned int m_timeForForceCleanTmp;
@property (nonatomic) BOOL m_isDelete;
@property (nonatomic) BOOL m_isDeleteUnknow;
@property (nonatomic) BOOL m_isReportDelUnknow;
@property (nonatomic) BOOL m_isEnableReport;
@property (nonatomic) BOOL m_isEnableScan;
@property (nonatomic) BOOL m_isEnableDeleteEmptyFolder;
@property (nonatomic) BOOL m_isEnablePreForceCleanTmp;
@property (nonatomic) unsigned int m_timeIntervalBetweenEachScanFinish;
@property (nonatomic) unsigned int m_timeIntervalWholeScan;
@property (nonatomic) unsigned int m_timeIntervalWholeScanReport;

- (id)init;
- (void)loadConfigFromX;
- (id)description;
- (BOOL)isDataValid;

@end
