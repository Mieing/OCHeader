@class NSMutableArray;

@interface TingAudioTraceLog : NSObject

@property (retain, nonatomic) NSMutableArray *traceLogs;
@property (nonatomic) double realPlayedTime;
@property (nonatomic) double previousStartTime;

- (id)init;
- (void)makeRecordWith:(int)a0 currentTime:(double)a1 playRate:(float)a2;
- (id)logStrings;
- (void).cxx_destruct;

@end
