@class AWEPlayInteractionFansToolUtilityBottomView;

@interface AWEPlayInteractionFansToolNewBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEPlayInteractionFansToolUtilityBottomView *utilityView;

- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackFansToolBarShowEvent;
- (void)trackFansToolBarClickEvent;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)willDisplay;
- (void)tapHandler:(id)a0;

@end
