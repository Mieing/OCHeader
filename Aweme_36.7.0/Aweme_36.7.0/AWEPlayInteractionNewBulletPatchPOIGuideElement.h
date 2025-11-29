@class AWEFeedBulletPatchPoiGuideAnchorView, AWEPlayInteractionBulletPatchPOIElementViewModel;

@interface AWEPlayInteractionNewBulletPatchPOIGuideElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEFeedBulletPatchPoiGuideAnchorView *bulletPatchPOIGuideView;
@property (retain, nonatomic) AWEPlayInteractionBulletPatchPOIElementViewModel *viewModel;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)updatePatchPoiGuideAnchorView:(BOOL)a0 fromInitialize:(BOOL)a1;
- (BOOL)shouldShowBulletPatchPoiGuideAnchorView:(id)a0;
- (BOOL)shouldShowBulletScreen:(id)a0;
- (void)userDidTapPatchPoiGuide;
- (void)userDidTapClosePatchPoiGuide;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
