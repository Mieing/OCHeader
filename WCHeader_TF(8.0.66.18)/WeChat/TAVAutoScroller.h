@class TAVDisplayTriggerMachine;

@interface TAVAutoScroller : NSObject

@property (retain, nonatomic) TAVDisplayTriggerMachine *triggerMachine;
@property (nonatomic) long long autoScrollType;
@property (nonatomic) float autoScrollSpeed;
@property (nonatomic) double autoScrollInset;
@property (nonatomic) double earEdgeInset;

- (id)init;
- (void)cleanUpAutoScrollValues;
- (void).cxx_destruct;

@end
