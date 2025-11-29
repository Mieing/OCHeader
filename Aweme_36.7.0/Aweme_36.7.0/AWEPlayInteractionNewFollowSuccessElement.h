@class AWEHistoryPublicDataController, AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewFollowSuccessElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;
@property (retain, nonatomic) AWEHistoryPublicDataController *listDataController;
@property (nonatomic) long long actionType;

- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)viewDidDisposed;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)noticeTapped;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:(id /* block */)a0;
- (void)p_hideAntiAddictedNoticeBarView:(long long)a0 animation:(id /* block */)a1;
- (void)showFollowSuccessNoticeBar:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;
- (id)identifier;
- (void)dealloc;

@end
