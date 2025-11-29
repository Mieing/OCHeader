@class AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionAddWarningBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;

- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (void)trackShowEvent;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (BOOL)isMyVideoWithAwemeModel:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackClickEvent;
- (void)updateAntiAddictedNoticeBarView;
- (void)trackStayDurationEvent;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;
- (id)identifier;
- (void)tapHandler;

@end
