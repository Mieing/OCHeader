@interface HMDTTKAutoReleaseProtection : HeimdallrModule

@property (nonatomic) BOOL protectionStarted;

+ (id)sharedInstance;

- (void)checkOpenStatus:(int)a0 invalidStop:(BOOL)a1;
- (void)protectMethodGroups:(id)a0;
- (void)setUp;
- (void)start;

@end
