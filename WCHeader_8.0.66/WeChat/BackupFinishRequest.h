@class NSString, BackupReportList, BackupAnalyseInfo;

@interface BackupFinishRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (retain, nonatomic) BackupReportList *data;
@property (nonatomic) unsigned int serverSessionCount;
@property (nonatomic) unsigned int serverMessageCount;
@property (nonatomic) unsigned int serverFileCount;
@property (nonatomic) unsigned int calculateSize;
@property (nonatomic) unsigned int serverDataPushSize;
@property (nonatomic) unsigned int serverReadDbtotalTime;
@property (nonatomic) unsigned int serverReadFileTotalTime;
@property (nonatomic) unsigned int serverCostTotalTime;
@property (nonatomic) unsigned int serverVersion;
@property (retain, nonatomic) BackupAnalyseInfo *analyseInfo;

+ (void)initialize;

@end
