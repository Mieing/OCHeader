@class IESECLiveGoodsBaseModel, NSString, NSDate, IESECLiveTracker;

@interface IESECLiveDurationTracker : NSObject

@property (copy, nonatomic) NSString *event;
@property (retain, nonatomic) NSDate *start;
@property (weak, nonatomic) IESECLiveTracker *tracker;
@property (retain, nonatomic) IESECLiveGoodsBaseModel *goods;
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
