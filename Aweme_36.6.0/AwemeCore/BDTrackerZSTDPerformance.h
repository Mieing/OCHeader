@interface BDTrackerZSTDPerformance : NSObject

@property (nonatomic) int encodeType;
@property (nonatomic) int dataLevel;
@property (nonatomic) _Atomic long long srcLengthTotal;
@property (nonatomic) _Atomic long long dstLengthTotal;
@property (nonatomic) _Atomic long long compressTimeTotal;
@property (nonatomic) _Atomic long long success;
@property (nonatomic) _Atomic long long total;

+ (id)perf_queue;
+ (id)perf_dict;
+ (void)trackPerformance:(BOOL)a0 encodeType:(int)a1 srcLength:(unsigned long long)a2 dstLength:(unsigned long long)a3 interal:(int)a4;
+ (void)flush;
+ (void)initialize;

- (id)toJSON;

@end
