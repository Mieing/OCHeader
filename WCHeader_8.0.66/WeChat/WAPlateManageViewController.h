@class UITableView, MMUIButton, NSObject, WAReportPlateManageActionItem, NSString, NSMutableArray, MMUILabel;
@protocol WAPlateManageViewControllerDelegate;

@interface WAPlateManageViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, WAPlateEditViewControllerDelegate>

@property (retain, nonatomic) NSMutableArray *plateList;
@property (retain, nonatomic) UITableView *listView;
@property (retain, nonatomic) MMUILabel *defaultLabel;
@property (retain, nonatomic) MMUIButton *defaultAddBtn;
@property (retain, nonatomic) MMUIButton *addButton;
@property (retain, nonatomic) MMUILabel *addInfoLabel;
@property (nonatomic) long long currentEditIdx;
@property (nonatomic) long long currentDeleteIdx;
@property (nonatomic) BOOL firstIn;
@property (weak, nonatomic) NSObject<WAPlateManageViewControllerDelegate> *delegate;
@property (retain, nonatomic) WAReportPlateManageActionItem *reportAction;
@property (retain, nonatomic) NSString *createSubDesc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlateList:(id)a0;
- (id)init;
- (void)updatePlateList:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)initViews;
- (id)navigationBarBackgroundColor;
- (void)layoutSubViews;
- (double)tableViewHeight;
- (id)getPlateEditVCWithStyle:(unsigned long long)a0;
- (void)onDefaultAddBtnClicked:(id)a0;
- (void)_pushNewPageViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)onPlateEditViewControllerFinished:(id)a0;
- (void)issueGetPlateRequest;
- (void)issueCreatePlateRequest:(id)a0;
- (void)issueDeletePlateRequest:(id)a0;
- (void)issueUpdatePlateRequestWithOld:(id)a0 andNew:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleCreatePlateInfo:(id)a0;
- (void)handleUpdatePlateInfo:(id)a0;
- (void)handleDeleteUserPlateInfo:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)onPlateManagerDelete;
- (id)plateFormatString:(id)a0;
- (void).cxx_destruct;

@end
