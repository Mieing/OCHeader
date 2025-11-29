@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEIMMessageConsecutiveDiggComponent : AWEIMComponentBase <AWEIMMessageConsecutiveDiggInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) NSMutableDictionary *pathCache;
@property (retain, nonatomic) NSDictionary *indexTransition;
@property (nonatomic) long long maxInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (BOOL)canStartPlayAnimationOnHeartView:(id)a0;
- (id)diggAnimationPathOfIndex:(long long)a0;
- (long long)nextAnimationIndex:(long long)a0 digged:(BOOL)a1 interval:(double)a2;
- (id)p_diggFirstAnimationPath;
- (id)p_diggConsecutiveAnimationPathOfIndex:(long long)a0;
- (void).cxx_destruct;

@end
