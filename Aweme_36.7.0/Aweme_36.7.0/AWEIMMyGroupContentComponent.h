@class NSString, UIView;
@protocol IESIMContactPickerSelectService, IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble;

@interface AWEIMMyGroupContentComponent : IESIMContactPickerCollectionViewContentComponent <AWEIMMyGroupContentProtocol, IESIMContactPickerContentDataProviderDelegate>

@property (retain, nonatomic) id<IESIMContactPickerContentDataProvider> insertProvider;
@property (retain, nonatomic) id<IESIMContactPickerContentDataProvider, IESIMContactDataProviderLoadMoreAble> dataProvider;
@property (retain, nonatomic) id<IESIMContactPickerContentDataProvider> ftsSearchProvider;
@property (weak, nonatomic) id<IESIMContactPickerSelectService> selectService;
@property (retain, nonatomic) UIView *searchEmptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadList;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppearAndRender;
- (void)dataProvider:(id)a0 updateCellModel:(id)a1;
- (id)dataProvider:(id)a0 cellModelForShareModel:(id)a1;
- (id)getProviders;
- (id)searchService;
- (id)p_configAsNormalCellModelWithShareModel:(id)a0;
- (id)p_configAsSingleSelectCellModelWithShareModel:(id)a0;
- (id)p_configAsMultiSelectCellModelWithShareModel:(id)a0;
- (void)p_transferToChatWithShareModel:(id)a0 needFloatMode:(BOOL)a1;
- (void)p_trackShareVideoWithShareModel:(id)a0;
- (void)p_trackSendCellClickWithCid:(id)a0;
- (void)p_trackPostScriptWithCid:(id)a0 isClick:(BOOL)a1;
- (BOOL)p_isSelectedTab;
- (void)p_trackSelectWithShareModel:(id)a0 select:(BOOL)a1;
- (BOOL)p_filterWithCon:(id)a0;
- (id)emptyPageConfigForState:(unsigned long long)a0 emptyPage:(id)a1;
- (void)emptyPagePrimaryButtonTapped:(id)a0;
- (void)contactPickerSelectService:(id)a0 didAddSelectIdentifiers:(id)a1;
- (void)contactPickerSelectService:(id)a0 didRemoveSelectIdentifier:(id)a1;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)containerContext;

@end
