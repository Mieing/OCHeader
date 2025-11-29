@interface VSDConfigModel : NSObject

@property (nonatomic) unsigned long long mode;
@property (nonatomic) double virtualScrollBegin;
@property (nonatomic) double virtualScrollAnchor;
@property (nonatomic) double slideDownCloseDistance;
@property (nonatomic) double slideRightCloseDistance;
@property (nonatomic) double slideDownCloseVelocity;
@property (nonatomic) double slideRightCloseVelocity;
@property (nonatomic) double slideUpSpringBackToBeginDistance;
@property (nonatomic) double slideLeftSpringbackToBeginDistance;
@property (nonatomic) BOOL enableBlockingPoint;

@end
