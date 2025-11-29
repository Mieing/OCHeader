@class AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionBookVideoDetailBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *bookVideoDetailBottomView;

- (id)trackParams;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackStayDurationEvent;
- (void)trackBarShow;
- (void)trackBarClick;
- (BOOL)shouldShowBookVideoDetailBottomView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapped;

@end
