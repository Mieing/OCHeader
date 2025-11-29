@class NSString, UIView;
@protocol AFDSlidesViewProtocol;

@interface AWEPOIFeedPlayVideoViewController : AWEPlayVideoExtraAbilityViewController <AWEPOIFeedPlayVideoViewControllerProtocol>

@property (nonatomic) BOOL forceImageSliderPlayingWhenTransition;
@property (retain, nonatomic) UIView<AFDSlidesViewProtocol> *imageSliderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (BOOL)awe_play;
- (id)modernTransitionContext;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (void)resetImageSliderView;
- (BOOL)enableAFDSlidesView;
- (void)imageSliderPlayIfNeed;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)viewDidLayoutSubviews;
- (BOOL)stop;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;

@end
