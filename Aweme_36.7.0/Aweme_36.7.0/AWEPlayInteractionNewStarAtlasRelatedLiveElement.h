@class AWEFeedStarAtlasRelatedLiveInfoView;

@interface AWEPlayInteractionNewStarAtlasRelatedLiveElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEFeedStarAtlasRelatedLiveInfoView *relatedLiveInfoView;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)commonTrackParams;
- (void)viewDidDisposed;
- (void)trackClick;
- (void)trackADEventWithLabel:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackDisplay;
- (void)trackBarStayTime;
- (void)updateStarAtlasReviewStautsView;
- (void)trackEventWithEvent:(id)a0;
- (void)relatedLiveInfoTapGR;
- (id)userID;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)setupSubviews;
- (id)roomID;

@end
