@interface TPPlayerConfigWrapper : NSObject

+ (id)sharedInstance;

- (void)setCoreEventProcessEnable:(BOOL)a0;
- (BOOL)getCoreEventProcessEnable;

@end
