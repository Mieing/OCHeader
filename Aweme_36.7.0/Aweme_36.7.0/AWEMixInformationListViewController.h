@class AWEAwemeModel, NSString, NSArray, DUXContentSheet, UIView, AWEMixInformationListDataController, UITableView, AWEUILoadingView, NSDictionary;

@interface AWEMixInformationListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEMixInformationListViewControllerProtocol>

@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) UITableView *mixInformationList;
@property (retain, nonatomic) AWEMixInformationListDataController *dataController;
@property (nonatomic) double currentOffset;
@property (nonatomic) BOOL isPreloadData;
@property (nonatomic) BOOL needShowLoadingView;
@property (retain, nonatomic) AWEAwemeModel *currentVideoModel;
@property (retain, nonatomic) NSArray *currentVideoModels;
@property (retain, nonatomic) NSString *selectedMixID;
@property (retain, nonatomic) UIView *mixBar;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) id /* block */ didClickMixHandleBlock;
@property (copy, nonatomic) id /* block */ didClickCreateMixHandleBlock;
@property (copy, nonatomic) id /* block */ didClickMixCompletionBlock;
@property (copy, nonatomic) id /* block */ batchUpdateMixCompletionBlock;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)loadMore;
- (id)aweui_emptyPageBgContainerView;
- (void)setupDataWith:(id)a0;
- (void)preloadDataDidScroll:(id)a0;
- (BOOL)createMixModeNewStyle;
- (id)createMixBarNewStyle;
- (BOOL)createMixMode;
- (id)createMixBar;
- (id)getCreateMixTrackParams;
- (void)mixBarDidClick;
- (void)disappearListWithCompletionBlock:(id /* block */)a0;
- (BOOL)isBatchMode;
- (BOOL)modifyMixMode;
- (void)disappearList;
- (void)didClickMixCellWithMixModel:(id)a0;
- (void)handleBatchUpdateMixModel:(id)a0;
- (void)showToastWithSuccess:(BOOL)a0;
- (void)showMixInformationListWithCompletion:(id /* block */)a0;
- (id)initWithMixModel:(id)a0 enterFrom:(id)a1;
- (id)initWithVideoModels:(id)a0 enterFrom:(id)a1;
- (id)initWithVideoModel:(id)a0 enterFrom:(id)a1;
- (void).cxx_destruct;
- (void)reload;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)setupUI;

@end
