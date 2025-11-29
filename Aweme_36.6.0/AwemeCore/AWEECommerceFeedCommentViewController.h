@class NSString, IESECFeedCommentViewController, UITableView;
@protocol IESECFeedCommentTableViewTemplateCellActionDelegate, AWECommentGesProtocol, AWECommentTemplateCellViewModelManager, AWECommentListServiceContainerProtocol;

@interface AWEECommerceFeedCommentViewController : UIViewController <IESECFeedCommentViewControllerContainerDelegate, AWECommentListBusinessServiceContainerContextProtocol, AWEECProductEvaluationListViewControllerProtocol>

@property (retain, nonatomic) IESECFeedCommentViewController *feedCommentViewController;
@property (copy, nonatomic) NSString *replyLabelText;
@property (nonatomic) BOOL useTemplateCell;
@property (retain, nonatomic) id<AWECommentTemplateCellViewModelManager> viewModelManager;
@property (weak, nonatomic) id<IESECFeedCommentTableViewTemplateCellActionDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommentGesProtocol> gesDelegate;
@property (weak, nonatomic) id<AWECommentListServiceContainerProtocol> commentServiceContainerDelegate;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL fromCommentVC;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isBGColorWhite;
@property (nonatomic) BOOL shouldForceLightMode;
@property (nonatomic) BOOL isShowInContainerView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *accountType;

- (long long)businessServiceDataSourceCount;
- (id)identifierForBusinessServiceDataSourceInSection:(long long)a0;
- (id)replyCountForSection:(long long)a0;
- (void)updateReplyCountForSection:(long long)a0 count:(long long)a1;
- (id)configModelForSection:(long long)a0;
- (void)onAWEUIThemeChangeNotification;
- (id)templateCellModeFor:(id)a0;
- (BOOL)container_shouldTriggleTableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)container_tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)container_shouldTriggleTableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)container_tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)container_tableView:(id)a0 cellOfContainer:(id)a1 atIndexPath:(id)a2;
- (id)container_tableViewReplyLabelText;
- (BOOL)container_shouldTriggleTableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)container_tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)container_shouldTriggleTableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)container_tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (BOOL)container_shouldTriggleTableView:(id)a0 heightForFooterInSection:(long long)a1;
- (double)container_tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (BOOL)container_shouldTriggleTableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)container_tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)container_shouldTriggleTableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)container_tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)container_tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)container_tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)container_tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)container_tableView:(id)a0 didEndDisplayingHeaderView:(id)a1 forSection:(long long)a2;
- (void)container_tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (void)container_tableView:(id)a0 didEndDisplayingFooterView:(id)a1 forSection:(long long)a2;
- (void)container_tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)applyTemplateCell;
- (void)renderOnCell:(id)a0 model:(id)a1 maxWidth:(double)a2 actionDelegate:(id)a3;
- (struct CGSize { double x0; double x1; })cellSize:(id)a0 maxWidth:(double)a1;
- (void)cellPrepareForReuse:(id)a0;
- (void)updateTemplateModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (long long)sectionForIdentifier:(id)a0;
- (void)viewDidLoad;
- (id)currentList;

@end
