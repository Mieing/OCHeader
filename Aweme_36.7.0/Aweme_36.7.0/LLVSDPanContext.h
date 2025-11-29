@interface LLVSDPanContext : NSObject

@property (nonatomic) unsigned long long containerState;
@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint { double x; double y; } velocity;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double virtualScrollTotal;

- (unsigned long long)directionWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithPanGesture:(id)a0 targetView:(id)a1;
- (id)description;

@end
