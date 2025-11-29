@class VIDisplayTriggerObject, CADisplayLink;

@interface TAVDisplayTriggerMachine : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) VIDisplayTriggerObject *triggerObject;
@property (copy, nonatomic) id /* block */ triggerOperation;
@property (nonatomic) long long preferredFramesPerSecond;

- (void)dealloc;
- (id)initWithTriggerOperation:(id /* block */)a0;
- (id)init;
- (void)start;
- (void)pause;
- (void).cxx_destruct;

@end
