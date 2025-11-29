@class NSMutableDictionary;

@interface AWEFirstFrameAnimationDelayManager : NSObject

@property (nonatomic) BOOL isDuringDelayPhase;
@property (retain, nonatomic) NSMutableDictionary *helpers;

+ (void)addAnimationWithName:(id)a0 videoIdentifier:(id)a1 animation:(id /* block */)a2;
+ (void)removeAnimationWithName:(id)a0 videoIdentifier:(id)a1;
+ (void)triggerAnimationAfterFirstFrameWithIdentifier:(id)a0;
+ (id)shared;
+ (void)resetWithIdentifier:(id)a0;

- (void).cxx_destruct;

@end
