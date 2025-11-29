@class NSMapTable, CADisplayLink;

@interface AWEAnimationDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSMapTable *pauseObserversWeakMap;
@property (retain, nonatomic) NSMapTable *observersWeakMap;
@property (nonatomic) BOOL enable;
@property (nonatomic) double musicAnimationDuration;
@property (nonatomic) BOOL isPauseDuringForeground;

+ (double)musicAnimationDuration;
+ (void)setMusicAnimationDuration:(double)a0;
+ (BOOL)enable;
+ (long long)preferredFramesPerSecond;
+ (id)sharedLink;

- (void)onAppWillEnterForeground;
- (void)onAppDidEnterBackground;
- (void)addObserver:(id)a0 block:(id /* block */)a1;
- (void)setObserverResume:(id)a0;
- (void)setObserverPause:(id)a0;
- (void)setupDisplayLinkWithPreferredFramesPerSecond:(long long)a0 pauseWhenPause:(BOOL)a1;
- (void)handleDisplayLink:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeObserver:(id)a0;

@end
