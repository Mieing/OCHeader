@class NSMutableArray, NSMutableDictionary;

@interface MMWebViewPerformance : NSObject

@property (retain, nonatomic) NSMutableArray *timeRecordList;
@property (retain, nonatomic) NSMutableDictionary *timeRecordDic;
@property (nonatomic) unsigned long long startTime;

+ (unsigned long long)currentTimeInMs;

- (id)init;
- (id)description;
- (void)recordTimeWithName:(id)a0 newCategory:(BOOL)a1 detail:(id)a2;
- (void)recordTimeWithName:(id)a0 time:(unsigned long long)a1 newCategory:(BOOL)a2 detail:(id)a3;
- (void)sortTimeRecord;
- (void)removeAllRecords;
- (int)relativeRecordTimeForName:(id)a0;
- (void).cxx_destruct;

@end
