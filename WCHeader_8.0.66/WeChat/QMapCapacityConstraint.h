@interface QMapCapacityConstraint : NSObject

@property (nonatomic) BOOL allowRenderL4;

+ (id)sharedCapacity;

- (void)setupAllowRenderL4;
- (void)setup;
- (id)init;

@end
