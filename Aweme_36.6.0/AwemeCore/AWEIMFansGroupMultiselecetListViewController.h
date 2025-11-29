@class NSString, AWEIMFansGroupMultiselectListTableViewModel, AWEIMContactListSelectAllHeaderView;

@interface AWEIMFansGroupMultiselecetListViewController : AWEIMListBaseViewController <AWEIMContactListSelectAllHeaderViewProtocol>

@property (retain, nonatomic) AWEIMFansGroupMultiselectListTableViewModel *viewModel;
@property (retain, nonatomic) AWEIMContactListSelectAllHeaderView *selectAllHeaderView;
@property (nonatomic) BOOL searchEngineReady;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)changeToMultiselect:(BOOL)a0;
- (void)__setupUI;
- (void)__backBtnClicked;
- (long long)currentFunctin;
- (void)removeSelectObject:(id)a0;
- (void)prepareDataWithModel:(id)a0 completeBlock:(id /* block */)a1;
- (id)initWithFansGroupInfoList:(id)a0 selectList:(id)a1;
- (void)__updateNavBar;
- (void)addShareModelToSelectList:(id)a0;
- (void)removeShareModelFromSelectList:(id)a0;
- (id)__titleForSelectAllFansHeader;
- (void)__updateSelectAllHeader;
- (void)didTapOnSelectAllHeaderView;
- (void)__updateSearchEngine;
- (void)__setupSelectListWithSelectList:(id)a0;
- (BOOL)__isNameMatchKeyword:(id)a0 withShareModel:(id)a1 sortOpt:(BOOL)a2;
- (void)__refreshTableView;
- (id)__shareModelAtIndexPath:(id)a0;
- (void)__search:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setAllContacts:(id)a0;

@end
