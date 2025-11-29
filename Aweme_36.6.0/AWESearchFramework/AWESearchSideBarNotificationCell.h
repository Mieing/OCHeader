@class AWESearchSideBarNotificationCardHeaderView, NSDictionary, UIView, AWESearchSideBarRedDotManager;
@protocol AWELeftSideBarCustomModuleDetailViewProtocol, AWEIMSideNoticeViewControllerProtocol;

@interface AWESearchSideBarNotificationCell : AWESearchSideBarBaseCell

@property (retain, nonatomic) id<AWEIMSideNoticeViewControllerProtocol> sideNoticeViewController;
@property (copy, nonatomic) NSDictionary *templateCount;
@property (nonatomic) BOOL isRedDotShowing;
@property (nonatomic) BOOL hasRedDot;
@property (nonatomic) BOOL hasNumberDot;
@property (retain, nonatomic) UIView<AWELeftSideBarCustomModuleDetailViewProtocol> *noticeView;
@property (retain, nonatomic) AWESearchSideBarNotificationCardHeaderView *headerView;
@property (retain, nonatomic) AWESearchSideBarRedDotManager *redDotManager;

+ (id)identifier;

- (long long)leftSideBarGroupType;
- (void)trackShow;
- (void)trackClick;
- (void)setupObserve;
- (void)__updateSideBarUnreadCount;
- (void)cardClick;
- (id)p_commonTrackParams;
- (void)onCreate;
- (unsigned long long)p_clickDuration;
- (void)p_updateSideBarUnreadCount;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (double)cellHeight;
- (void)updateWithModel:(id)a0;
- (void)refreshData;
- (void)setupLayout;

@end
