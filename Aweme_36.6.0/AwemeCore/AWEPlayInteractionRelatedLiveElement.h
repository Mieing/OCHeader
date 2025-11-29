@class AWEFeedRelatedSearchTipView, NSString;

@interface AWEPlayInteractionRelatedLiveElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEFeedRelatedSearchTipView *tipsView;
@property (retain, nonatomic) NSString *visionSessionID;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackOnDisplay;
- (void)updateTipsView;
- (void)relatedSearchViewTapped;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
