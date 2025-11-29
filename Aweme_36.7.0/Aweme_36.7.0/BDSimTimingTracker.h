@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface BDSimTimingTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *timingDict;
@property (retain, nonatomic) NSMutableSet *ignoreBackgroundSet;
@property (retain, nonatomic) NSMutableDictionary *pausedDict;
@property (retain, nonatomic) NSMutableDictionary *paramsDict;
@property (retain, nonatomic) NSMutableArray *observerArray;

+ (id)sharedTracker;

- (void)cancelTimingForKey:(id)a0;
- (double)pauseTimingForKey:(id)a0;
- (BOOL)hasTimingForKey:(id)a0;
- (BOOL)resumeTimingForKey:(id)a0;
- (BOOL)startTimingForKey:(id)a0 ignoreBackgroundTime:(BOOL)a1;
- (BOOL)startTimingForKey:(id)a0 ignoreBackgroundTime:(BOOL)a1 params:(id)a2;
- (double)endTimingForKey:(id)a0;
- (void)pauseAllTiming;
- (void)resumeAllTiming;
- (id)endAllTiming;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)allParams;

@end
