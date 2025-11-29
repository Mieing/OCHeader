@class NSMutableArray, WCFinderTabPageModel;

@interface WCFinderWechatMentionTabPageViewController : WCFinderTabPageViewController

@property (retain, nonatomic) NSMutableArray *childModelArray;
@property (retain, nonatomic) WCFinderTabPageModel *likeTabPageModel;
@property (retain, nonatomic) WCFinderTabPageModel *commentTabPageModel;
@property (nonatomic) long long selectedTab;

- (id)initWithSelectedTabType:(long long)a0;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpRightNav;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupRedDot;
- (void)switchTabPageViewControllerFrom:(id)a0 to:(id)a1 isTriggerByUser:(BOOL)a2;
- (void)clearCurrentTabRedDot;
- (void)onClickMentionSwitchAction;
- (void).cxx_destruct;

@end
