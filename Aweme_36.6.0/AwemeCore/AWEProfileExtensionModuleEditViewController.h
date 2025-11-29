@class UITableView, NSString, AWEProfileExtensionModuleEditBasicTableViewConfig, AWEUILoadingView, NSMutableArray, UIButton;

@interface AWEProfileExtensionModuleEditViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *saveButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSMutableArray *cardLists;
@property (nonatomic) BOOL hasMove;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) AWEProfileExtensionModuleEditBasicTableViewConfig *tableViewConfig;
@property (nonatomic) BOOL hasFindMoreCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_enableCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)a0 gestureRecognizer:(id)a1;
- (void)__setupUI;
- (void)__showLoadingView;
- (void)__configData;
- (void)__trackProfileModuleShow;
- (id)currentDisplayCards;
- (id)currentNotDisplayCards;
- (id)__serviceDictionary;
- (id)__filteredCardListsInDict:(id)a0 forKey:(id)a1;
- (id)__showCardlist;
- (id)currentDisplayCardIds;
- (BOOL)__hasEdit;
- (void)__trackProfileModuleNotSave;
- (void)__trackProfileModuleSave:(id)a0;
- (void)__saveRequest;
- (id)currentNotDisplayCardIds;
- (void)__dismissLoadingView;
- (void)saveRequestSuccess;
- (void)__fakeWriteToUserModel;
- (void)__trackSaveSuccess;
- (id)__serviceNameStringWithArray:(id)a0;
- (id)__serviceIdStringWithArray:(id)a0;
- (id)__serviceStringByCompare:(id)a0 secondCardArray:(id)a1;
- (void)__commitEditingStyle:(long long)a0 indexPath:(id)a1;
- (void)__clickCancelButton;
- (void)__clickSaveButton;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 moveRowAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 targetIndexPathForMoveFromRowAtIndexPath:(id)a1 toProposedIndexPath:(id)a2;

@end
