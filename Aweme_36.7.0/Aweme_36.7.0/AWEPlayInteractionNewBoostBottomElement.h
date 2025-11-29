@class AWEPlayInteractionNearbyUtilityBottomView;

@interface AWEPlayInteractionNewBoostBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEPlayInteractionNearbyUtilityBottomView *utilityView;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackBoostBarShowEvent;
- (void)trackBoostBarClickEvent;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapHandler:(id)a0;

@end
