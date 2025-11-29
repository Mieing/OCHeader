@class WCRedEnvelopesWelcomePageLayout;
@protocol WCRedEnvelopesWelcomePageViewControllerDelegate;

@interface WCRedEnvelopesWelcomePageViewController : WCRedEnvelopesBaseViewController {
    id<WCRedEnvelopesWelcomePageViewControllerDelegate> m_delegate;
    BOOL m_bDidBack;
}

@property (retain, nonatomic) WCRedEnvelopesWelcomePageLayout *m_layout;

- (id)init;
- (BOOL)useTransparentNavibar;
- (void)updateNavigationBarWithFlag:(unsigned int)a0;
- (void)initNavigationBar;
- (void)OnLeftBarButtonDone;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLoad;
- (void)refreshViewWithData:(id)a0;
- (void)OnClickHeadActivity;
- (void)OnClickTailActivity;
- (void)OnClickBannerActivity;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;

@end
