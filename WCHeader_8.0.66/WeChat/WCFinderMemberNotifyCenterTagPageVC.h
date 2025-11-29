@class WCFinderContact, NSArray, WCFinderRedDotTipsShowInfo, WCFinderRedDotCtrlInfo;

@interface WCFinderMemberNotifyCenterTagPageVC : WCFinderTabPageViewController

@property (retain, nonatomic) WCFinderContact *authorContact;
@property (retain, nonatomic) NSArray *childModelArray;
@property (nonatomic) long long unreadLikeCount;
@property (nonatomic) long long unreadCommentCount;
@property (nonatomic) long long unreadNotifyCount;
@property (nonatomic) long long unreadFollowCount;
@property (nonatomic) double enterTime;
@property (nonatomic) BOOL showMentionSwitchEntry;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *redDotCtrlInfo;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *rightEntryRedDotShowInfo;

- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)loadUnreadCount;
- (void)loadChildTabModel;
- (id)createTabModelWithTabType:(unsigned long long)a0 tabTitle:(id)a1 bindRedDotPath:(id)a2;
- (unsigned long long)defaultSelectType;
- (void)setupRedDot;
- (void)setTabRedDotForType:(unsigned long long)a0 unreadCount:(unsigned long long)a1;
- (void)switchTabPageViewControllerFrom:(id)a0 to:(id)a1 isTriggerByUser:(BOOL)a2;
- (void)configureTabPageHeaderView:(id)a0;
- (unsigned long long)tabIndexWithTabType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
