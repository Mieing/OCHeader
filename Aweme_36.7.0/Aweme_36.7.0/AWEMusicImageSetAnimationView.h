@class NSArray, UIImageView, NSString;

@interface AWEMusicImageSetAnimationView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) NSArray *imageSet;
@property (retain, nonatomic) UIImageView *frontView;
@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) NSArray *animList;
@property (nonatomic) unsigned long long nextAnimIndex;
@property (nonatomic) unsigned long long nextImgIndex;
@property (nonatomic) BOOL animationStopFinished;
@property (nonatomic) BOOL shouldAutorotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetAnimations;
- (void)resumeLayer:(id)a0;
- (void)pauseLayer:(id)a0;
- (void)setAnimationForView:(id)a0 withOffset:(double)a1 withDelay:(double)a2 needAppearAnim:(BOOL)a3;
- (void)setupAnimations;
- (id)animGroupwithIndex:(unsigned long long)a0 withOffset:(double)a1 withDelay:(double)a2 needAppearAnim:(BOOL)a3;
- (void).cxx_destruct;
- (void)pause;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)removeAllAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resume;
- (void)dealloc;
- (void)setup;
- (void)seek:(double)a0;
- (void)resetLayer:(id)a0;

@end
