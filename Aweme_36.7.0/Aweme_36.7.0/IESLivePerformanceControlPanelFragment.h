@class IESLiveMoreToolsScrollSettingView, NSString, HTSLiveToolbarItem, IESLivePopupItem, NSMutableArray, IESLivePerformanceControlStore;

@interface IESLivePerformanceControlPanelFragment : IESLiveRoomComponent <IESLiveToolbarComponentHandler, IESLiveControlModuleBizPerformanceInterface>

@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (retain, nonatomic) NSMutableArray *optItems;
@property (retain, nonatomic) IESLivePerformanceControlStore *store;
@property (retain, nonatomic) IESLiveMoreToolsScrollSettingView *settingView;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)toolbarReceiveComponent:(id)a0 completion:(id /* block */)a1;
- (void)trackPanelShow;
- (void)hideSettingView;
- (id)orderList;
- (void)showSettingView;
- (void)refreshSettingView;
- (BOOL)bizPerformanceCanLocalPush;
- (void)recordBizPerformanceLocalPushTimes;
- (BOOL)bizPerformanceCanToast;
- (void)recordBizPerformanceToastTimes;
- (void).cxx_destruct;
- (void)removeItem:(id)a0;
- (id)sortedItems;
- (void)registerItem:(id)a0;

@end
