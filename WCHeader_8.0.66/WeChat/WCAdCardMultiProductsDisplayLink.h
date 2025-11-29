@class NSMutableArray, CADisplayLink;

@interface WCAdCardMultiProductsDisplayLink : MMObject

@property (retain, nonatomic) CADisplayLink *animationLink;
@property (retain, nonatomic) NSMutableArray *animationObjects;
@property (nonatomic) double timestamp;
@property (nonatomic) double animationCurrentTime;

- (id)init;
- (void)dealloc;
- (void)addNotifications;
- (void)onDidEnterBackground;
- (void)handleDisplayLinkEvent:(id)a0;
- (void)appendAnimationObjects:(id)a0;
- (void)appendAnimationObject:(id)a0;
- (void)saveCurrentCenterWith:(id)a0;
- (void)restorePrevioisCenterWith:(id)a0;
- (void)startAnimations;
- (void)stopAnimations;
- (void)resetAnimations;
- (void)terminateAnimations;
- (void)persistAnimations;
- (void).cxx_destruct;

@end
