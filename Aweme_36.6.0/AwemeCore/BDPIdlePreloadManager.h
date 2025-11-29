@class NSTimer;

@interface BDPIdlePreloadManager : NSObject

@property (retain, nonatomic) NSTimer *preloadTimer;

+ (id)sharedManager;

- (void)setupPreloadTimer;
- (void).cxx_destruct;

@end
