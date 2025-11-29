@class NSString;

@interface AWELivePluginAdapterLiveMarkView : UIView <AWEFeedLiveMarkViewProtocol>

@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMarkLayerGradientColor:(id)a0;
- (void)stopAnimationWithView:(id)a0;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4 showColorGradient:(BOOL)a5;
- (void)startAnimationWithView:(id)a0 withURLs:(id)a1 showLiveTag:(BOOL)a2;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 type:(long long)a2;
- (void)setMarkLayerGradientColorWithType:(long long)a0;
- (void)startSlowerAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)adjustSkylightAnimationLayerFrame;
- (void)startNewBreatheAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4;
- (void)startOuterCircleBreatheAnimationWithView:(id)a0 syncStartTime:(double)a1;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1;
- (void)startAnimationWithView:(id)a0 showLiveTag:(BOOL)a1 withURLs:(id)a2 type:(long long)a3 interval:(double)a4 viewAnimationScale:(double)a5 maskAnimationScale:(double)a6;
- (void)startAnimationWithView:(id)a0;
- (void)setStaticLiveStyle:(id)a0 showLiveTag:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;

@end
