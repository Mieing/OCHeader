@class NSString, UIImageView, UILabel, UIView;

@interface AWELuckyCatSendGoldCollectView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) UIView *goldCollectContainerView;
@property (retain, nonatomic) UIImageView *sendGoldCollectImageView;
@property (retain, nonatomic) UILabel *sendGoldCollectLabel;
@property (retain, nonatomic) UIImageView *flashImageView;
@property (nonatomic) double labelFont;
@property (copy, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endLoading;
- (id)flashAnimation;
- (id)loadingAnimation;
- (id)initWithFontScale:(double)a0;
- (void)startFlash;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startLoading;
- (void)setUpUI;
- (void)endFlash;

@end
