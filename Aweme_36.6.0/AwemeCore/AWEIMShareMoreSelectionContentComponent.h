@class IESIMShareSelectionContentDataProvider, NSString, IESIMShareMoreSelectionContext;
@protocol IESIMShareMoreSelectionTrackAction, IESIMContactPickerSelectService;

@interface AWEIMShareMoreSelectionContentComponent : IESIMContactPickerCollectionViewContentComponent <IESIMContactPickerSelectAction, AWEIMShareSendTextBottomComponentAction>

@property (retain, nonatomic) IESIMShareSelectionContentDataProvider *messageTabDataProvider;
@property (retain, nonatomic) IESIMShareSelectionContentDataProvider *allContactDataProvider;
@property (retain, nonatomic) IESIMShareMoreSelectionContext *bizContext;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (weak, nonatomic) id<IESIMShareMoreSelectionTrackAction> trackService;
@property (nonatomic) long long lastLoadIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_afterFirstRender;
- (id)getProviders;
- (id)aAWELiteUGSocialModuleAdapter;
- (id)emptyPageConfigForState:(unsigned long long)a0 emptyPage:(id)a1;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (id)pageSwitchConfig;
- (id)createSectionBuilderWithDataType:(unsigned long long)a0;
- (void)p_commonConfigDataProvider:(id)a0;
- (void)updateBottomComponentViewHeight:(double)a0;
- (void)p_reloadMore;
- (BOOL)didSelectWithCellModel:(id)a0;
- (void)p_cellWillDisaplayWithShareModel:(id)a0 indexPath:(id)a1;
- (id)naviBarConfig;
- (void)searchDidBegin;
- (void)searchDidCancel;
- (BOOL)shouldShowNaviBar;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;

@end
