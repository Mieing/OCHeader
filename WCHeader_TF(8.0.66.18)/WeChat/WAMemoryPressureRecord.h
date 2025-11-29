@class NSMutableArray;

@interface WAMemoryPressureRecord : MMObject

@property (retain, nonatomic) NSMutableArray *records;

- (id)init;
- (void)recordMemoryPressureWithLevel:(unsigned long long)a0;
- (id)getRecordDescriptionInRecentInterval:(unsigned long long)a0 getAllLevelCount:(unsigned int *)a1 normalLevelCount:(unsigned int *)a2 warningLevelCount:(unsigned int *)a3 UrgentLevelCount:(unsigned int *)a4 aboveWarningLevelCount:(unsigned int *)a5 continuityWarningCount:(unsigned int *)a6 continuityUrgentCount:(unsigned int *)a7;
- (void).cxx_destruct;

@end
