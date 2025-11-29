@class NSDate;

@interface IESGurdBackgroundInfo : NSObject

@property (retain, nonatomic) NSDate *startTime;
@property long long totalDuration;
@property BOOL isBackground;

+ (id)sharedInstance;

- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)didEnterBackground;
- (void)start;

@end
