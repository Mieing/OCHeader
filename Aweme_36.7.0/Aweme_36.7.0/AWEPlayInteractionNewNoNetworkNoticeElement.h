@class AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewNoNetworkNoticeElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *noNetworkNoticeBarView;

- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)viewDidDisposed;
- (void)handleNoNetworkDetectionResult:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)noticeTapped;
- (void)updateNoticeBarViewRevealStatus:(BOOL)a0;
- (void)updateViewHeight:(double)a0;
- (void)updateNoNetworkNoticeBarView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
