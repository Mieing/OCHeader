@class NSString, UIImageView, UIImage, CAAnimationGroup, CABasicAnimation;

@interface AWEPOICollectView : UIControl <CAAnimationDelegate, AWEPOICollectViewProtocol>

@property (retain, nonatomic) UIImage *collectImage;
@property (retain, nonatomic) UIImage *unCollectImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) CABasicAnimation *basicAnimation1;
@property (retain, nonatomic) CABasicAnimation *basicAnimation2;
@property (retain, nonatomic) CABasicAnimation *basicAnimation3;
@property (retain, nonatomic) CABasicAnimation *basicAnimation4;
@property (retain, nonatomic) CAAnimationGroup *aniGroup1;
@property (retain, nonatomic) CAAnimationGroup *aniGroup2;
@property (retain, nonatomic) CABasicAnimation *alphaAnimation1;
@property (retain, nonatomic) CABasicAnimation *alphaAnimation2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCollected:(BOOL)a0 animated:(BOOL)a1;
- (void)forceFlush;
- (void)beginFirstTouchAnimation;
- (void)beginSecondTouchAnimation;
- (void)beginTouchAnimation;
- (void)removeAllAnimation;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (void)setTintColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
