@class AWEIMRTVListSelectModel, NSArray, AWEIMRTVListSelectBaseViewControllerContext, NSDictionary, NSString, NSMutableArray, UIButton;
@protocol AWEIMRTVListSelectBaseViewControllerDelegate;

@interface AWEIMRTVListSelectBaseViewController : AWEIMListBaseViewController <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) AWEIMRTVListSelectModel *model;
@property (retain, nonatomic) AWEIMRTVListSelectBaseViewControllerContext *context;
@property (readonly, nonatomic) NSArray *allUsers;
@property (readonly, nonatomic) NSArray *sectionTitles;
@property (readonly, nonatomic) NSArray *sectionIndicatorTitles;
@property (retain, nonatomic) NSMutableArray *selectedCellModels;
@property (retain, nonatomic) NSMutableArray *indexRelations;
@property (readonly, nonatomic) NSDictionary *cellModelMapper;
@property (retain, nonatomic) UIButton *leftNavigationButton;
@property (retain, nonatomic) UIButton *rightNavigationButton;
@property (retain, nonatomic) UIButton *createConversionBtn;
@property (weak, nonatomic) id<AWEIMRTVListSelectBaseViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (void)halfScreenContainerVCDidTapConatainer:(id)a0;
- (void)halfScreenContainerVCWillDragToDismiss:(id)a0;
- (BOOL)halfScreenContainerGestureRecognizer:(id)a0 shouldReceiveTouchInView:(id)a1;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__dismissSelf:(id /* block */)a0;
- (long long)currentFunctin;
- (void)__configureUI;
- (void)__didSelectedCellModelsChange;
- (void)__setupCreateButton;
- (void)__updateSearchView;
- (void)__configureNavigationBar;
- (void)__configureTableView;
- (void)__didClickLeftNavigationButton:(id)a0;
- (void)__configureNavigationButton:(unsigned long long)a0 buttonStyle:(id)a1 title:(id)a2 action:(SEL)a3;
- (void)__createChat;
- (id)__navigationButtonWithTitle:(id)a0 position:(unsigned long long)a1;
- (void)__configureNavigationWithCustomButton:(id)a0 forPosition:(unsigned long long)a1 action:(SEL)a2;
- (void)__layoutNavigationButton:(id)a0 position:(unsigned long long)a1;
- (id)__getUserWithSecUid:(id)a0;
- (void)__refreshCellStatusWithSelectedCount:(long long)a0;
- (void)refreshSearchViewIfNeed;
- (BOOL)__canSelectWithCellModel:(id)a0;
- (void)refreshSearchViewIfNeedReloadDirectly:(BOOL)a0;
- (id)__selectViewModels;
- (id)__cellModelWithAWEIMUser:(id)a0;
- (void)__configureListViewDataWithModel:(id)a0 context:(id)a1;
- (id)__selectedUserIMIDs;
- (void)removeSelectObject:(id)a0;
- (double)additionalContentBottomInset;
- (void)updateSearchView;
- (unsigned long long)currentParticiptorCount;
- (id)timeoutSecIDs;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)fetchData;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (id)allContacts;

@end
