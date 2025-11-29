@class LOTAnimationView, NSString;

@interface IESLivePlaybackLottieAnimationFragment : IESLivePlaybackComponent <IESLivePlaybackLottieAnimationRouter>

@property (retain, nonatomic) LOTAnimationView *lotAnimationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)showLottieAnimationWithLottieId:(id)a0 autoFinished:(BOOL)a1 startPlay:(id /* block */)a2 endPlay:(id /* block */)a3 failPlay:(id /* block */)a4;
- (void)finishAnimationAndRemoveAnimationView;
- (id)p_getLottieJsonFile:(id)a0;
- (void)p_showAnimationWithPath:(id)a0 autoFinished:(BOOL)a1 startPlay:(id /* block */)a2 endPlay:(id /* block */)a3 failPlay:(id /* block */)a4;
- (void)createAnimation:(id)a0;
- (id)pp_getLottieJsonFile:(id)a0;
- (void).cxx_destruct;

@end
