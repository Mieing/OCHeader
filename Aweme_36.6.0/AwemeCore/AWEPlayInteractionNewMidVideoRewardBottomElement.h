@class AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewMidVideoRewardBottomElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *infoBarView;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)commonTrackParams;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)noticeTapped;
- (void)trackOnDisplay;
- (void)updateUIContent;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
