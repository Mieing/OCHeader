@class NSString, NSMutableDictionary;

@interface FTSGlobalStat : NSObject

@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSMutableDictionary *moduleStat;
@property (nonatomic) unsigned int msgIndexCount;
@property (nonatomic) unsigned int intelligentMsgIndexCount;
@property (nonatomic) unsigned int favIndexCount;
@property (nonatomic) unsigned int allContactCount;
@property (nonatomic) unsigned int singleContactResultCnt;
@property (nonatomic) unsigned int groupContactResultCnt;
@property (nonatomic) unsigned int brandContactResultCnt;
@property (nonatomic) unsigned int addressBookResultCnt;

- (id)init;
- (void)finishContactSearchWithSingleCount:(unsigned int)a0 groupCount:(unsigned int)a1 brandCount:(unsigned int)a2;
- (void)startGlobalModule;
- (void)startModeule:(unsigned long long)a0;
- (void)finishModule:(unsigned long long)a0 withResultCount:(unsigned int)a1;
- (void)removeModule:(unsigned long long)a0;
- (id)getModuleForType:(unsigned long long)a0;
- (void)doReportOneGlobalSearch:(id)a0;
- (id)parseModuleTime;
- (id)parseModuleResultCount;
- (void).cxx_destruct;

@end
