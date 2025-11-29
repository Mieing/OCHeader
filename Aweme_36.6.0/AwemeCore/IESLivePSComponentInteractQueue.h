@class NSString, IESLivePSComponentConfigModel, IESLiveGCDTimer, UIView, NSMutableArray;
@protocol IESLivePSComponentInteractQueueDelegate, IESLivePSComponentViewProtocol;

@interface IESLivePSComponentInteractQueue : NSObject

@property (retain, nonatomic) NSMutableArray *modelArray;
@property (retain, nonatomic) NSMutableArray *timerModelArray;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL isExecutingTask;
@property (retain, nonatomic) UIView<IESLivePSComponentViewProtocol> *currentView;
@property (retain, nonatomic) IESLivePSComponentConfigModel *currentModel;
@property (nonatomic) long long maxDuration;
@property (retain, nonatomic) IESLiveGCDTimer *durationTimer;
@property (weak, nonatomic) id<IESLivePSComponentInteractQueueDelegate> delegate;
@property (copy, nonatomic) NSString *interactType;

- (void)componentOrientationChanged:(long long)a0;
- (id)initWithDIContext:(id)a0;
- (void)showComponent:(id)a0;
- (void)startTimerIfNeed;
- (void)executeNextTask;
- (void)removeCurrentView;
- (void)handleComponentConfigModel:(id)a0;
- (void)handleAssembleConfigModel:(id)a0;
- (void)handleDelaySetConfigModel:(id)a0;
- (void)handleTimeStampSetConfigModel:(id)a0;
- (void)askToShowComponent:(id)a0;
- (void)pushTimerSetModel:(id)a0;
- (void)pushModel:(id)a0;
- (void)recycleModel:(id)a0;
- (void)invalidateTimerWithModel:(id)a0;
- (id)produceComponentView:(id)a0;
- (void)stopMaxDurationTimer;
- (void)startModelTimerIfNeed:(id)a0;
- (void)startMaxDurationTimer;
- (void)removeComponentConfigModel:(id)a0;
- (void)checkTimerModelArray;
- (void)stopTimerIfNeed;
- (void).cxx_destruct;

@end
