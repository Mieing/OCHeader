@interface MinimizeTaskContainerMoveContext : NSObject

@property (nonatomic) unsigned long long moveBeginTime;
@property (nonatomic) struct CGPoint { double x; double y; } fromPoint;

@end
