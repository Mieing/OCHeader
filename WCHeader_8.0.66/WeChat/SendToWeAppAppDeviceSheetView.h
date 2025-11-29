@class WCActionSheetRecentItemsManager, NSArray, NSString, NSDictionary, SendToWeAppAppDeviceADCell, SendToWeAppAppDeviceSheetViewConfig, NSObject, UITableView, MagicAdInfo;
@protocol SendToWeAppAppDeviceSheetViewDelegate;

@interface SendToWeAppAppDeviceSheetView : MMAutoLayoutSheetView <UITableViewDelegate, UITableViewDataSource, SendToWeAppAppDeviceADCellDelegate>

@property (retain, nonatomic) WCActionSheetRecentItemsManager *itemsManager;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL needSelectMsgSection;
@property (nonatomic) BOOL needADSection;
@property (nonatomic) double defaultHeight;
@property (retain, nonatomic) SendToWeAppAppDeviceADCell *adCell;
@property (retain, nonatomic) SendToWeAppAppDeviceSheetViewConfig *config;
@property (retain, nonatomic) MagicAdInfo *adInfo;
@property (retain, nonatomic) NSArray *sectionTypes;
@property (nonatomic) long long maxShowIndex;
@property (weak, nonatomic) NSObject<SendToWeAppAppDeviceSheetViewDelegate> *delegate;
@property (retain, nonatomic) NSDictionary *reportParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemsManager:(id)a0 config:(id)a1 adInfo:(id)a2;
- (void)pageSheetDidCloseWithType:(long long)a0;
- (void)initConfigs;
- (void)initView;
- (void)genSectionTypes;
- (void)layoutSubviews;
- (double)pageSheetContentHeight;
- (void)showInView:(id)a0 animated:(BOOL)a1;
- (void)showFromViewController:(id)a0 animated:(BOOL)a1;
- (id)getAllAppsParams;
- (id)getExposeAppsAndAllAppsParams;
- (void)reportViewExpose;
- (void)onClickDetailBtn;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)clickOnCloseAD;
- (void).cxx_destruct;

@end
