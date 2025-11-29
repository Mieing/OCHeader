@interface DisplayLinkManager : NSObject

@property (class, readonly, nonatomic) BOOL maxRefreshRateEnabledOnIPhone;
@property (class, readonly, nonatomic) double displayRefreshRate;

+ (BOOL)getIsIpad;

- (void)onDisplayLink:(id)a0;

@end
