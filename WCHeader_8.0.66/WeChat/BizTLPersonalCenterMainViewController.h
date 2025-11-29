@class NSMutableDictionary, NSString, NSMutableArray, MMTableView;
@protocol BizTLPersonalCenterMainViewControllerDelegate;

@interface BizTLPersonalCenterMainViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, BrandTimelineSettingViewControllerDelegate>

@property (nonatomic) int sessionId;
@property (retain, nonatomic) MMTableView *mainMenuTableView;
@property (retain, nonatomic) NSMutableDictionary *cellDict;
@property (retain, nonatomic) NSMutableArray *groupCellList;
@property (nonatomic) int personalizedOpt;
@property (weak, nonatomic) id<BizTLPersonalCenterMainViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)initTableView;
- (void)initDynamicData;
- (void)filterDataSource:(id)a0;
- (BOOL)checkCellInfoAvaliable:(id)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)jumpToMyBizList;
- (void)jumpToRecentReading;
- (void)jumpToNotify;
- (void)jumpToSetting;
- (void)jumpToWeb:(id)a0;
- (void)jumpToWxa:(id)a0;
- (void)decorateCell:(id)a0 index:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)triggerRedline:(id)a0;
- (id)getNewDynamicList;
- (BOOL)isEndSectionCell:(id)a0;
- (BOOL)isStartSectionCell:(id)a0;
- (struct CGSize { double x0; double x1; })getCellSize;
- (void)setCornerRadius:(id)a0 top:(BOOL)a1 bottom:(BOOL)a2;
- (void)report27213:(unsigned int)a0 scene:(unsigned int)a1;
- (void)onPersonalizedOperated:(int)a0;
- (void).cxx_destruct;

@end
