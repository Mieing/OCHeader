@class NSMutableDictionary, LOTAnimationView, UIImage, NSString;

@interface BDSCLottieButton : BDSCControlButton <LOTAnimationDelegate>

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) NSMutableDictionary *animationNameMap;
@property (retain, nonatomic) UIImage *emptyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationView:(id)a0 fetchResourceWithURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAnimationName:(id)a0 select:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;

@end
