@class AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewDiskSpaceInfoBarElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *diskSpaceInfoBarView;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackOnDisplay;
- (void)updateDiskSpaceInfoBarView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
