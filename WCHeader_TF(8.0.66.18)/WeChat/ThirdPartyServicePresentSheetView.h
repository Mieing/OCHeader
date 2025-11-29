@class MMUIButton, NSArray, NSString, DevicePresentCollectionView, MMScrollStackCell, NSMutableArray, WAWxMaterialAppInfo;
@protocol ThirdPartyServicePresentSheetViewDelegate;

@interface ThirdPartyServicePresentSheetView : MMAutoLayoutSheetView <ScrollItemSelectionDelegate, IWCLanDeviceMsgForwardMgrExt, ILinkEventExt>

@property (retain, nonatomic) NSArray *dataWraps;
@property (nonatomic) unsigned int contentType;
@property (nonatomic) unsigned long long sheetScene;
@property (retain, nonatomic) NSString *batchFileExt;
@property (retain, nonatomic) NSArray *lanDevices;
@property (retain, nonatomic) NSMutableArray *privateDevices;
@property (retain, nonatomic) NSMutableArray *publicDevices;
@property (retain, nonatomic) DevicePresentCollectionView *oldDeviceView;
@property (retain, nonatomic) WAWxMaterialAppInfo *materialAppInfo;
@property (nonatomic) BOOL isShowingAllWeappItems;
@property (weak, nonatomic) MMScrollStackCell *weappTitleStackCell;
@property (retain, nonatomic) MMUIButton *weappMoreButton;
@property (weak, nonatomic) id<ThirdPartyServicePresentSheetViewDelegate> delegate;
@property (retain, nonatomic) NSString *chatUsername;
@property (nonatomic) unsigned long long chatType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentType:(unsigned int)a0 dataWraps:(id)a1 batchFileExt:(id)a2 sheetScene:(unsigned long long)a3;
- (id)getFirstMessageWrap;
- (id)getFirstOpenInfo;
- (void)dealloc;
- (void)initData;
- (void)initConfigs;
- (id)currentTitle;
- (BOOL)showAll;
- (BOOL)onlyShowWeapp;
- (BOOL)onlyShowDevice;
- (void)initView;
- (void)initWeappToolSection;
- (void)updateStackViewWithWxaCards:(id)a0 needWeappMoreButton:(BOOL)a1;
- (id)makeWeappToolItemView:(id)a0;
- (void)addWeappMoreButton;
- (void)onWeappMoreButton;
- (BOOL)withOpenWithOtherAppSection;
- (void)addOpenWithOtherAppSection;
- (void)initDeviceSection;
- (void)addTipsLabel;
- (void)addSpacer:(double)a0;
- (id)appendSubtextToScrollStackWhenShowAll:(id)a0 withNextSpace:(double)a1;
- (void)appendCellToScrollStack:(id)a0 withNextSpace:(double)a1;
- (id)titleLabel:(id)a0;
- (id)tipsButton;
- (void)onTipsTapped;
- (id)filteredDevicesOf:(long long)a0;
- (id)unfoldedItemsFrom:(id)a0 maxCount:(long long)a1;
- (id)foldedItemsFrom:(id)a0 maxCount:(long long)a1;
- (id)getToSaveUrl:(id)a0 filename:(id)a1;
- (void)onOpenWithOtherAppCell;
- (void)onSelectWeappItem:(id)a0;
- (void)realOpenAppForMaterials:(id)a0 wxaCard:(id)a1 chatUsername:(id)a2 chatType:(unsigned long long)a3 sheetScene:(unsigned long long)a4;
- (void)onSelectItem:(id)a0;
- (void)onItemAppended:(id)a0;
- (void)reportDeviceItemExposed:(id)a0;
- (void)reportDeviceItemClicked:(id)a0;
- (void)onWCLanDeviceFoundDeviceListUpdated:(id)a0;
- (void).cxx_destruct;

@end
