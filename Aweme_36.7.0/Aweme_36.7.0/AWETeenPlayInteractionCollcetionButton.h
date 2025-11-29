@class LOTAnimationView;

@interface AWETeenPlayInteractionCollcetionButton : AWETeenPlayInteractionBaseButton

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) BOOL isCollecting;

- (void)initializeElement;
- (void)p_updateUIIfNeeded;
- (void)p_collectionAction;
- (void)p_doAnimationWithCollectStatus:(unsigned long long)a0 requestFailed:(BOOL)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
