@class HTSLiveBusinessConfigure, IESLiveGCDTimer;
@protocol IESLiveBusinessConfigureDelegate;

@interface IESLiveBusinessConfigureModel : NSObject

@property (retain, nonatomic) IESLiveGCDTimer *timeStampTimer;
@property (retain, nonatomic) IESLiveGCDTimer *dismissTimer;
@property (nonatomic) BOOL needToCacheResourceId;
@property (nonatomic) long long type;
@property (retain, nonatomic) HTSLiveBusinessConfigure *configure;
@property (retain, nonatomic) id<IESLiveBusinessConfigureDelegate> delegate;

- (BOOL)enableShow;
- (void)startDismissTimer;
- (void)tryStartTimer;
- (id)initWithBusinessConfigure:(id)a0;
- (long long)typeWithBusinessConfigure;
- (void)timerNeverArrived;
- (void)startTimerWithDuration:(double)a0;
- (void)preLoadImageIfNeed;
- (void)cacheBusinessId;
- (id)userIDKey;
- (void).cxx_destruct;
- (void)dealloc;

@end
