@class NSArray, NSMutableArray;

@interface HTSBootLogger : NSObject

@property (retain, nonatomic) NSMutableArray *mainData;
@property (retain, nonatomic) NSMutableArray *taltolData;
@property (readonly) NSArray *mainMetrics;
@property (readonly) NSArray *totalMetrics;

+ (id)sharedLogger;

- (void)logName:(id)a0 duration:(double)a1 startTime:(double)a2 endTime:(double)a3;
- (void).cxx_destruct;
- (id)init;

@end
