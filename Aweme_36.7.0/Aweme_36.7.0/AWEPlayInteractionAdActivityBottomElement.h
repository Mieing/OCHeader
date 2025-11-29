@class UIView;
@protocol AWEFeedCommerceBottomTipProtocol;

@interface AWEPlayInteractionAdActivityBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) UIView<AWEFeedCommerceBottomTipProtocol> *adActivityView;

- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)updateAdActivityView;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:(id /* block */)a0;
- (void)trackOnDisplay;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
