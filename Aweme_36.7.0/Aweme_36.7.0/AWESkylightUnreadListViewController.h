@class NSString, AWESkylightOftenWatchSectionController, AWESkylightMoreAuthorSectionController;

@interface AWESkylightUnreadListViewController : AWECommonUserListViewController <UIScrollViewDelegate>

@property (copy, nonatomic) NSString *vcEnterForm;
@property (nonatomic) BOOL noUpdate;
@property (nonatomic) unsigned long long VCState;
@property (retain, nonatomic) AWESkylightOftenWatchSectionController *ofenWatchSectionController;
@property (retain, nonatomic) AWESkylightMoreAuthorSectionController *moreAuthorSectionController;
@property (retain, nonatomic) NSString *noticeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewModelClass;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (BOOL)enableStickHeader;
- (BOOL)shouldStickHeaderAtSectionIndex:(long long)a0 sectionController:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupCollectionView:(id)a0;
- (double)titleFontSize;

@end
