@class AWEAntiAddictedNoticeBarView;

@interface AWEPlayInteractionNewFavoriteSuccessElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView;

- (void)initializeElement;
- (id)activateInfoWithData:(id)a0;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)hideNoticeBarImmediately;
- (void)hideMutexTempElement:(id /* block */)a0;
- (void)noticeTapped;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:(id /* block */)a0;
- (void)setShouldShowFavoriteSuccessNoticeBar:(id)a0;
- (void)showSuccessFavoriteNoticeBar;
- (void)setTipsAndShow:(id)a0;
- (void)p_hideAntiAddictedNoticeBarView:(long long)a0 animation:(id /* block */)a1;
- (void)trackFavoriteEvent:(id)a0 Enterfrom:(id)a1 enterMethod:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
