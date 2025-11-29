@class NSMapTable;

@interface WCFinderZoomAnimatorShareData : NSObject

@property (retain, nonatomic) NSMapTable *animatorMap;

- (id)init;
- (BOOL)hasZoomAnimatorForKey:(id)a0;
- (id)zoomAnimatorForKey:(id)a0;
- (void)rebindAnimztorWithBehavior:(id)a0 key:(id)a1;
- (void)registerAnimator:(id)a0;
- (void)cleanAnimator:(id)a0;
- (void).cxx_destruct;

@end
