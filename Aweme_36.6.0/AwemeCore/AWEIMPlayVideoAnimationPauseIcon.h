@interface AWEIMPlayVideoAnimationPauseIcon : UIImageView

@property (nonatomic) BOOL isDefaultPauseIcon;
@property (nonatomic) BOOL isStatePaused;

- (void)playAnimationWithPaused:(BOOL)a0 duration:(double)a1;
- (void)playAnimationWithPaused:(BOOL)a0 duration:(double)a1 customPauseIcon:(id)a2;
- (id)defaultPauseImage;
- (id)init;
- (void)reset;

@end
