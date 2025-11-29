@class NSMutableArray;

@interface FinderReddotFreqConfig_XStrategy : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *pathPriorities;
@property (retain, nonatomic) NSMutableArray *businessTypePriorities;
@property (retain, nonatomic) NSMutableArray *historyRecords;
@property (nonatomic) unsigned int historyRecordUpdateTime;
@property (nonatomic) BOOL isResetClientRecord;

+ (void)initialize;

@end
