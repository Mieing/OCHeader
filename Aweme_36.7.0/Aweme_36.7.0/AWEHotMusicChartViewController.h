@class AWEAwemeModel, NSString, DUXContentSheet, AWEHotMusicTopTitleView, AWEMusicChartVideoDetailController, NSArray, NSDictionary, NSMutableSet, UIViewController;
@protocol AWEAwemeDetailTableViewControllerProtocol;

@interface AWEHotMusicChartViewController : UIViewController <AWEHotMusicChartListViewControllerDelegate, DUXSheetDelegate, AWEAwemeDetailTableViewControllerDelegate, AWEMusicChartVideoDetailControllerDelegate, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> *detailVC;
@property (weak, nonatomic) AWEMusicChartVideoDetailController *dataController;
@property (retain, nonatomic) DUXContentSheet *panelSheet;
@property (retain, nonatomic) AWEHotMusicTopTitleView *topTitleView;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;
@property (copy, nonatomic) NSString *currentMusicId;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *chartId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *firstMusicId;
@property (retain, nonatomic) NSDictionary *bottomInfoDict;
@property (retain, nonatomic) NSArray *musicList;
@property (retain, nonatomic) NSMutableSet *cellHasReported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (BOOL)detailTableViewControllerNeedUpdateBottomBarWhenReload:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)showPanelVC;
- (void)shouldDismissPanelVC;
- (void)shootSameWithMusicInfo:(id)a0;
- (void)selectMusicWithIndex:(long long)a0;
- (void)cellWillDisplayWithIndex:(long long)a0;
- (id)initWithDataController:(id)a0 initialIndex:(long long)a1 referString:(id)a2 sessionId:(id)a3 chartId:(id)a4 version:(id)a5 musicId:(id)a6 logExtraDict:(id)a7 bottomInfoDict:(id)a8;
- (void)hotMusicChartBottomBarShowPanelClick;
- (void)updateTopTitleView;
- (void)trackMusicListEntranceWithEventName:(id)a0;
- (void)trackMusicListPageShow;
- (void)trackMusicListClientWithEventName:(id)a0 index:(long long)a1;
- (void)trackShootBtnShowWithIndex:(long long)a0;
- (void)loadPreviousHasPreviousIsFalse;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
