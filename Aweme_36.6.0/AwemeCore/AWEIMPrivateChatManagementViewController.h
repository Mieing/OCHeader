@class AWEIMPrivateChatManagementFilterView, NSArray, NSDictionary, NSString, AWEIMPrivateChatManagementViewModel, UITableView;

@interface AWEIMPrivateChatManagementViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource, AWEIMPrivateChatManagementFilterViewDelegate, AWEIMPrivateChatManagementHeaderViewDelegate>

@property (retain, nonatomic) AWEIMPrivateChatManagementViewModel *viewModel;
@property (nonatomic) unsigned long long selectType;
@property (copy, nonatomic) NSArray *chatArr;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMPrivateChatManagementFilterView *filterView;
@property (nonatomic) BOOL isFilterViewShow;
@property (copy, nonatomic) NSDictionary *trackDict;
@property (nonatomic) BOOL shouldTrackNewTab;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (nonatomic) BOOL autoChangeToSelectStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)__setupUI;
- (void)__backBtnClicked;
- (void)didTappedMaskView;
- (void)__addKVO;
- (void)didSelectTabWithType:(unsigned long long)a0;
- (void)didClickFilterBtn;
- (void)__checkAndModifyFilterViewStatusIfNeeded;
- (void)__updateTableViewAndSelectViewUI;
- (double)__safeAreaBottomInset;
- (void)__trackNewTabClick;
- (void)__trackClickFilterBtn;
- (void)__setupFilterView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)initWithConfig:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
