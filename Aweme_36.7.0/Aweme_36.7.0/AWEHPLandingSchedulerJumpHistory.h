@class NSMutableArray, MMKV;

@interface AWEHPLandingSchedulerJumpHistory : NSObject

@property (nonatomic) BOOL hasRead;
@property (nonatomic) long long errorCount;
@property (nonatomic) long long maxSize;
@property (nonatomic) double maxDuration;
@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) MMKV *mmkv;

- (BOOL)appendRecord:(id)a0;
- (void)p_saveData;
- (void)p_tryReadData;
- (void)p_filterRecords:(id)a0;
- (double)p_getTimestamp;
- (id)initWithMaxSize:(long long)a0 maxDuration:(double)a1;
- (id)getRecords;
- (long long)getWriteErrorCount;
- (void)updateWriteErrorCount:(long long)a0;
- (void).cxx_destruct;
- (void)clear;
- (void)save;

@end
