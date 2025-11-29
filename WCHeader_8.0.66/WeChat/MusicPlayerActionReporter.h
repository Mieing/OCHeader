@class MMMusicInfo, NSString;

@interface MusicPlayerActionReporter : NSObject

@property (retain, nonatomic) MMMusicInfo *musicInfo;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) double playRate;

- (id)init;
- (void)reportWithState:(unsigned long long)a0 duartion:(double)a1 currenTime:(double)a2;
- (id)traceLogWithStateState:(unsigned long long)a0 currentTime:(double)a1;
- (id)stringFromState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
