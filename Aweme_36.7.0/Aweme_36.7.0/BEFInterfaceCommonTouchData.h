@interface BEFInterfaceCommonTouchData : NSObject

@property (nonatomic) unsigned long long identify;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) struct CGPoint { double x; double y; } pos;
@property (nonatomic) double pressureForce;
@property (nonatomic) double majorRadius;
@property (nonatomic) double timestamp;

- (id)initWithTouch:(id)a0;

@end
