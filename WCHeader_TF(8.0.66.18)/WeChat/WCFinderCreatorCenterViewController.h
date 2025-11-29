@class NSString, FinderNewUserPrepareResponse, WCTableViewManager, WCFinderContact;

@interface WCFinderCreatorCenterViewController : MMUIViewController <WCFinderRedDotExt>

@property (retain, nonatomic) WCFinderContact *contact;
@property (retain, nonatomic) FinderNewUserPrepareResponse *userPrepare;
@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (nonatomic) BOOL hasExposeAnchorTaskEntrance;
@property (nonatomic) BOOL hasExposeAnchorTaskRedDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 userPrepare:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupTableView;
- (void)reloadTableView;
- (void)addAuthSection;
- (void)onClickAuth;
- (void)addOriginalCellToSection:(id)a0;
- (BOOL)enableShowOriginalEntry;
- (void)clickOriginalCertification;
- (void)addLiveSection;
- (void)addLiveAnchorTaskSection:(id)a0;
- (void)clickLiveIncome;
- (void)showIncomVC;
- (void)showLiveAgencyWebPage;
- (BOOL)checkAccountLogout;
- (void)clickLiveAnchorTaskEntrance;
- (void)clickLiveLottery;
- (void)addStoreSection;
- (void)clickStore;
- (void)addOtherSection;
- (void)clickProduceGuide;
- (id)produceGuideUrl;
- (void)addToSection:(id)a0 withTitle:(id)a1 status:(id)a2 action:(SEL)a3;
- (void)addToSection:(id)a0 withTitle:(id)a1 action:(SEL)a2;
- (id)makeSectionSeparator;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void)finderRedDotDataRevokedWithPathKey:(id)a0;
- (void)updateOriginalPlainRedDotWithPathKey:(id)a0;
- (void)openMiniAppSilence;
- (void).cxx_destruct;

@end
