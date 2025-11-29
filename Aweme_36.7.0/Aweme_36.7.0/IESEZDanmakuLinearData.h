@class NSString, NSMutableDictionary, UIView;
@protocol IESEZDanmakuViewProtocol, IESEZDanmakuDataDelegate;

@interface IESEZDanmakuLinearData : IESEZDanmakuInteractData <IESEZDanmakuMutexDataProtocol, IESEZDanmakuDataMonitorProtocol>

@property (nonatomic) long long animationCount;
@property (nonatomic) double moveDistance;
@property (nonatomic) double animationSpeed;
@property (nonatomic) double trailingMinPadding;
@property (nonatomic) double alphaPercent;
@property (nonatomic) double fullyDisplayedDuration;
@property (copy, nonatomic) NSString *preferredTrackStrategyIdentifier;
@property (nonatomic) BOOL shouldDisplayedUntilDone;
@property (copy, nonatomic) id /* block */ waitingUntilDone;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tag;
@property (weak, nonatomic) id<IESEZDanmakuDataDelegate> delegate;
@property (retain, nonatomic) UIView<IESEZDanmakuViewProtocol> *danmakuView;
@property (retain, nonatomic) id danmakuViewModel;
@property (copy, nonatomic) NSString *viewClassName;
@property (nonatomic) double duration;
@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (nonatomic) unsigned long long controlState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double createTime;
@property (nonatomic) double receivedTime;
@property (nonatomic) double enqueueTime;
@property (nonatomic) double dequeueTime;
@property (nonatomic) double dispatchTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSMutableDictionary *extraTimePoint;

- (void)startLinearAnimation;
- (void)resumeLinearAnimation;
- (void)pauseLinearAnimation;
- (void)stopLinearAnimation;
- (void).cxx_destruct;
- (void)pause;
- (id)init;
- (void)stop;
- (void)start;
- (void)resume;
- (id)message;

@end
