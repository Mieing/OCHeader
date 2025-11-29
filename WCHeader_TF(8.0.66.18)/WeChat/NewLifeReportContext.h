@class NSString, NSMutableArray;

@interface NewLifeReportContext : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *contextId;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) unsigned long long startUpTime;
@property (retain, nonatomic) NSString *redDotUuid;
@property (nonatomic) unsigned int cacheType;
@property (nonatomic) unsigned int isNewLifeTab;
@property (nonatomic) unsigned int useInstanceCache;
@property (retain, nonatomic) NSMutableArray *actionList;
@property (nonatomic) unsigned long long fromLastEnterFindMoreTab;
@property (nonatomic) unsigned int openByView;

+ (void)initialize;

@end
