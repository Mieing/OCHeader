@class NSArray;

@interface MMDiskUsageScanConfig : NSObject

@property (nonatomic) BOOL m_isDelete;
@property (nonatomic) BOOL m_isDeleteUnknow;
@property (nonatomic) BOOL m_isReportDelUnknow;
@property (nonatomic) BOOL m_isDeleteExpireFileForDebug;
@property (nonatomic) BOOL m_isQuickScan;
@property (nonatomic) BOOL useFolderCache;
@property (nonatomic) BOOL m_bSaveReportData;
@property (nonatomic) unsigned int m_urgentLevel;
@property (nonatomic) BOOL m_bSuspendable;
@property (retain, nonatomic) NSArray *regularExpressionsThatLogFilesToKV;
@property (nonatomic) BOOL isDeleteEmptyFolder;
@property (nonatomic) BOOL isIgnoreCowFile;
@property (nonatomic) BOOL isHighPriority;
@property (nonatomic) int concurrentCount;
@property (nonatomic) BOOL willScanWholeWechat;
@property (nonatomic) BOOL willScanMidImgWxam;
@property (nonatomic) BOOL willConvertMidImgWxam;
@property (nonatomic) BOOL willReportExistC2CFile;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
