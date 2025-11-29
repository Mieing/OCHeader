@class UIView;
@protocol AWEFeedCommerceBottomTipProtocol;

@interface AWEPlayInteractionNewRelatedSearchElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) UIView<AWEFeedCommerceBottomTipProtocol> *relatedSearchTipView;
@property (nonatomic) BOOL showedBefore;
@property (nonatomic) BOOL hasReset;

+ (Class)aAWEFeedModuleServiceDOUYINSSAdapterClass;

- (void)initializeElement;
- (void)viewController_didDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (id)aAWEFeedModuleServiceDOUYINSSAdapter;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:(id /* block */)a0;
- (void)showTipsNotification:(id)a0;
- (void)trackAdFeedBottomBarWithStatus:(id)a0;
- (BOOL)disableHasResetTag;
- (id)getBottomBarSearchWord:(id)a0;
- (void)configRelatedSearchBarModelIfNeededWithAweme:(id)a0 responseModel:(id)a1;
- (void)updateRelatedSearchTipView;
- (void)trackOnDisplay:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;

@end
