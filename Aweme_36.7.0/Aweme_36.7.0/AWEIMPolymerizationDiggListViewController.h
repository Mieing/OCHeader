@class AWEAwemeModel, NSString, AWEIMPolymerizationDiggDataController, AWEUserModel, NSDictionary, UITableView, NSMutableArray, NSNumber, NSIndexPath;

@interface AWEIMPolymerizationDiggListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEUserMessage, AWEIMPolymerizationDiggCellDelegate, AWERouterViewControllerProtocol, AWEZoomTransitionOuterContextProvider, AWEIMPolymerizationDiggListViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMPolymerizationDiggDataController *dataController;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) long long noticeType;
@property (nonatomic) long long diggType;
@property (copy, nonatomic) NSNumber *noticeID;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (nonatomic) BOOL isOnline;
@property (copy, nonatomic) NSString *tagText;
@property (retain, nonatomic) NSIndexPath *zoomIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *zoomTransitionContext;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked;
- (void)p_loadMoreData;
- (void)p_endRefreshing;
- (void)nicknameTappedWithDiggModel:(id)a0;
- (void)avatarTappedWithDiggModel:(id)a0;
- (void)coverTappedWithOptions:(id)a0;
- (void)p_trackerInnerMessageWithAction:(id)a0 diggModel:(id)a1;
- (void)p_refreshDataWithInitial:(BOOL)a0;
- (void)p_trackerEnterDiggList;
- (id)truncationNameStringMaxWidth:(double)a0 str:(id)a1 attributes:(id)a2;
- (void)p_setupDataSource;
- (void)trackAndTransToProfileWithUser:(id)a0 enterMethod:(id)a1 enterPosition:(id)a2;
- (void)clickHeaderViewCloseTapped;
- (void)p_updateTitleName:(id)a0;
- (id)p_fromUserWithModel:(id)a0;
- (void)p_updateCellNameLabel:(id)a0 user:(id)a1;
- (void)updateUserStatus:(id)a0 status:(long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)headerView;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;

@end
