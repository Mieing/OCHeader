@class NSString, NSMutableDictionary, BackupAnalyseInfo;

@interface WXGBackupMgrAnalyseInfo : NSObject

@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *briefString;
@property (retain, nonatomic) NSMutableDictionary *allChatInfo;
@property (nonatomic) unsigned long long totalSessionCount;
@property (nonatomic) unsigned long long totalMsgCount;
@property (nonatomic) unsigned long long totalMediaCount;
@property (nonatomic) unsigned long long totalFilterMediaCount;
@property (nonatomic) double costTime;
@property (nonatomic) unsigned long long filterRequestCount;
@property (nonatomic) double filterRequestCostTime;
@property (retain, nonatomic) BackupAnalyseInfo *analyseInfo;

- (id)init;
- (id)brief;
- (void).cxx_destruct;

@end
