@class NSString, NSDate;

@interface IESLiveECommerceDurationTrack : NSObject

@property (copy, nonatomic) NSString *event;
@property (retain, nonatomic) NSDate *start;
@property (copy, nonatomic) id /* block */ trackerProvider;
@property (nonatomic) BOOL shouldTrackWhenAppEnterBackground;
@property (readonly, nonatomic) double currentDuration;

- (void)handleAPPWillEnterForeground:(id)a0;
- (void)handleAPPDidEnterBackground:(id)a0;
- (void)startTrack;
- (void)endTrack;
- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
