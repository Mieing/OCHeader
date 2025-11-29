@class NSDate;

@interface IESLiveClearScreenWatchTime : NSObject

@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) double duration;

- (void)endClearScreen;
- (void)enterClearScreen;
- (void).cxx_destruct;
- (id)init;

@end
