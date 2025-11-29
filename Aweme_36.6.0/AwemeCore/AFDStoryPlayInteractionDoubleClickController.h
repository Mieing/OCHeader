@class AFDStoryDiverseDiggViewModel;

@interface AFDStoryPlayInteractionDoubleClickController : AWEPlayInteractionNewBaseController

@property (retain, nonatomic) AFDStoryDiverseDiggViewModel *viewModel;

- (id)buildDiverseDiggContext;
- (id)likeViewModelWithAweme:(id)a0;
- (BOOL)canResponseVideoPlayerViewNormalDiggDoubleClick;
- (void)onVideoPlayerViewNormalDiggDoubleClicked:(id)a0;
- (BOOL)canResponseVideoPlayerViewDiverseDiggDoubleClick;
- (void)onVideoPlayerViewDiverseDiggDoubleClicked:(id)a0;
- (id)buildDiggModels;
- (id)getDoubleClickDiverseDiggModel;
- (void)showDoubleClickAnimation:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)animationController;
- (void)applicationDidEnterBackground;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
