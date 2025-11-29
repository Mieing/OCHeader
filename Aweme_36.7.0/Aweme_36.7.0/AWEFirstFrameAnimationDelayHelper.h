@class NSDate, NSMutableArray, NSMutableDictionary;

@interface AWEFirstFrameAnimationDelayHelper : NSObject

@property (nonatomic) BOOL isDuringDelayPhase;
@property (retain, nonatomic) NSMutableArray *animationNames;
@property (retain, nonatomic) NSMutableDictionary *animations;
@property (retain, nonatomic) NSDate *trackAddTime;
@property (nonatomic) BOOL recordedTrackTime;

+ (double)animationDelayTimeAfterFirstFrame;
+ (BOOL)enableAnimationDelayAfterFirstFrame;

- (id)trackKey;
- (void)triggerAnimationAfterFirstFrame;
- (void)addAnimation:(id /* block */)a0 withName:(id)a1;
- (void)removeAnimationsWithName:(id)a0;
- (void).cxx_destruct;

@end
