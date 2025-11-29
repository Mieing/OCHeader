@class NSTimer, NSMutableArray;

@interface AWEVideoResourceDeallocManager : NSObject

@property (retain, nonatomic) NSMutableArray *resourcesToDealloc;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL shouldStartTrimmer;

+ (id)sharedInstance;

- (void)addResourceObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
