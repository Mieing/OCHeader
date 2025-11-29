@class NSNumber, NSMutableDictionary;

@interface BTMTimeCalculator : NSObject

@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (nonatomic) double launchTime;

+ (double)currentCpuTime;

- (id)paramsWithStartDate:(id)a0 startCpuTime:(double)a1;
- (void)clearStorage;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (id)init;
- (void)didEnterForeground;
- (BOOL)launching;

@end
