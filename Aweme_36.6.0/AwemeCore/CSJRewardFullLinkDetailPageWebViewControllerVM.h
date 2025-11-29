@class BUTimer;

@interface CSJRewardFullLinkDetailPageWebViewControllerVM : CSJWebViewControllerViewModel

@property (retain, nonatomic) BUTimer *timer;

- (id)initWithRequestURL:(id)a0 adinfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isNavBarHidden:(BOOL)a3 landingPageType:(unsigned long long)a4 isFromClick:(BOOL)a5;
- (id)getMaterialMeta;
- (void)updateRewardTime;
- (id)initWithRequestURL:(id)a0 adinfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 isNavBarHidden:(BOOL)a3;
- (void).cxx_destruct;
- (void)startTimer;
- (void)invalidateTimer;
- (void)dealloc;
- (void)handleViewDidLoad;

@end
