@class NSString, IESIMContactPickerUserDataProvider;

@interface IESIMContactPickerShortcutContentComponent : IESIMContactPickerCollectionViewContentComponent <IESIMContactPickerConfirmAction, IESIMContactPickerContentAction, IESIMContactPickerNaviRightButtonDidClickAction, IESIMContactPickerContentDataProviderDelegate>

@property (retain, nonatomic) IESIMContactPickerUserDataProvider *stickOnTopProvider;
@property (nonatomic) BOOL searching;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })emptyPageEdgeInsets;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)dataProvider:(id)a0 updateCellModel:(id)a1;
- (id)dataProvider:(id)a0 cellModelForShareModel:(id)a1;
- (id)getProviders;
- (void)__log:(id)a0;
- (id)searchService;
- (id)emptyPageConfigForState:(unsigned long long)a0 emptyPage:(id)a1;
- (id)pageSwitchConfig;
- (id)naviBarConfig;
- (BOOL)shouldShowNaviBar;
- (void)didClickSelectAll:(BOOL)a0;
- (void)registerCustomCell;
- (id)maximumSelectCount;
- (unsigned long long)__filterOption;
- (long long)__normalSectionBuildTypeWithConfigBuildType:(long long)a0;
- (void)__updateSelectAllSectionBuilderInjectionParam:(id)a0;
- (void)selectSectionModel:(id)a0;
- (void)deselectCellModels:(id)a0;
- (void)__updateEmptyPageBackgroundColorIfNeeded:(id)a0 withConfig:(id)a1;
- (id)__createErrorVacantView;
- (id)__extraSectionModel;
- (id)__cellModelWithShareModel:(id)a0;
- (void)__injectCommonInfoToCellModel:(id)a0;
- (void)__didSelectWithCellModel:(id)a0;
- (void)__updateCellModel:(id)a0 withIsSelected:(BOOL)a1;
- (void)__injectDisableSelectToCellModel:(id)a0;
- (void)__injectDefaultSelectStateToCellModel:(id)a0;
- (void)selectCellModels:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
