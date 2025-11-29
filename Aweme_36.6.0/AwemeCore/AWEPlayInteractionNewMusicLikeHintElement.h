@class AWEMusicLikeHintView, NSString;

@interface AWEPlayInteractionNewMusicLikeHintElement : AWEPlayInteractionNewBottomElement <AWEPadUIAdaptionViewTransitionObserver>

@property (retain, nonatomic) AWEMusicLikeHintView *musicLikeHintView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)initializeElement;
- (void)awe_viewController:(id)a0 willTransitionToSize:(struct CGSize { double x0; double x1; })a1 transitionCoordinator:(id)a2;
- (id)activateInfoWithData:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)p_setTappedBlock;
- (void)showSuccessMusicLikeHintView:(id)a0;
- (void)p_showMusicLikeHintViewWithCompletion:(id /* block */)a0;
- (void)p_hideMusicLikeHintViewWithCompletion:(id /* block */)a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
