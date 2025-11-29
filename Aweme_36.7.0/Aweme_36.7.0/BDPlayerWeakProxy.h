@class BDAnimatedImagePlayer;

@interface BDPlayerWeakProxy : NSObject

@property (weak, nonatomic) BDAnimatedImagePlayer *target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)nextFrame;

@end
