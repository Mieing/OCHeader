@class LOTAnimationView;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface RTVVoipInteractionButton : RTVVoipActionButton

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;

- (void)rxAwakeFromPropertyInjection;
- (void).cxx_destruct;
- (void)play;
- (void)setSelected:(BOOL)a0;

@end
