@class NSString;

@interface WAReportMemStatItem : WAReportBaseItem

@property (nonatomic) unsigned int eventType;
@property (nonatomic) BOOL isCache;
@property (nonatomic) unsigned int openSeq;
@property (nonatomic) unsigned int openInterval;
@property (nonatomic) long long processMemUsed;
@property (nonatomic) unsigned int waThreadMemUsed;
@property (nonatomic) unsigned int mainThreadMemUsed;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL isGame;
@property (nonatomic) unsigned int lastKillReason;
@property (nonatomic) unsigned long long coldLaunchInterAfterLastKillInMs;

@end
