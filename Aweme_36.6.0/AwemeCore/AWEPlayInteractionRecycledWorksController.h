@class FBKVOController;

@interface AWEPlayInteractionRecycledWorksController : AWEPlayInteractionBaseController

@property (retain, nonatomic) FBKVOController *kvoController;

- (void)resetAlpha;
- (void)addAlphaObservers;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)resetInteraction;

@end
