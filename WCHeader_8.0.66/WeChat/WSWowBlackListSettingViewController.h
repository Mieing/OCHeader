@class NSString, WSPersonalizedRecommendManager, MMTableViewInfo;

@interface WSWowBlackListSettingViewController : MMUIViewController <ITopStoryColikeExt>

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (retain, nonatomic) NSString *dontSeeCountStr;
@property (retain, nonatomic) NSString *dontAllowSeeCountStr;
@property (nonatomic) BOOL isRequestingHide;
@property (nonatomic) BOOL isRequestingBlock;
@property (nonatomic) BOOL isRequestHideByClick;
@property (nonatomic) BOOL isRequestBlockByClick;
@property (retain, nonatomic) WSPersonalizedRecommendManager *personalizedRecommendManager;
@property (retain, nonatomic) NSString *mode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)initNavBar;
- (void)onNavigationBackItemClick:(id)a0;
- (void)initView;
- (void)initData;
- (void)reloadTableView;
- (void)fixLoadingRect;
- (void)openOpnionFeedback:(id)a0;
- (id)appendUrlString:(id)a0 withKey:(id)a1 stringValue:(id)a2;
- (void)openDontSeeSomebody:(id)a0;
- (void)openDontAllowSomebodySee:(id)a0;
- (void)onRequestGetColikeBlockListEndResult:(BOOL)a0 withType:(unsigned int)a1 list:(id)a2;
- (id)genPersonalizedRecommendCellManager;
- (void)onChangePersonalizedRecommendSwitch:(id)a0;
- (void).cxx_destruct;

@end
