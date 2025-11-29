@interface MMLimitedModeForceDisplayLogic : NSObject

@property (nonatomic) BOOL forceDisplay;

+ (id)sharedInstance;

- (id)init;
- (BOOL)getForceDisplay;
- (void)clearForceDisplay;

@end
