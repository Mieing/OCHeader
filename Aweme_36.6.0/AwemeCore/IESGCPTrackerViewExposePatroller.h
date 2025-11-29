@class IESGCPTrackerViewDetector, UIView, IESGCPTrackerTrigger;

@interface IESGCPTrackerViewExposePatroller : NSObject

@property (retain, nonatomic) IESGCPTrackerTrigger *trigger;
@property (retain, nonatomic) IESGCPTrackerViewDetector *detector;
@property (nonatomic) BOOL needPatrol;
@property (weak, nonatomic) UIView *currentPatrolView;
@property (nonatomic) double lastDetectTime;
@property (nonatomic) double patrolMinInterval;
@property (copy, nonatomic) id /* block */ viewExposeBlock;
@property (copy, nonatomic) id /* block */ viewDismissBlock;
@property (copy, nonatomic) id /* block */ detectedBlock;

- (void)markPatrolIfNeed:(BOOL)a0;
- (void)startPatrol;
- (void)stopPatrol;
- (void)configPatrolRootView:(id)a0;
- (void)forceDetectCurrentRootView;
- (void)detectCurrentRootView;
- (void).cxx_destruct;

@end
