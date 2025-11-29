@class NSString, AWEIMStrangerQuickReceiveMsgViewModel, NSHashTable, NSArray;
@protocol IESIMHttpTask;

@interface AWEIMStrangerQuickManager : NSObject <IESIMActionSheetDelegate>

@property (retain, nonatomic) id<IESIMHttpTask> fetchSettingTask;
@property (retain, nonatomic) AWEIMStrangerQuickReceiveMsgViewModel *serverSetting;
@property (copy, nonatomic) NSString *showPanelEnterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) BOOL shouldShowNotice;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) NSArray *dataArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)panelHeight;
+ (id)configList;
+ (double)bottomViewHeight;
+ (double)panelBottomSpace;
+ (id)sharedInstance;

- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)showPrivateMsgSettingPanel:(id)a0 enterFrom:(id)a1;
- (id)displayItemForTips;
- (void)resetAllItem;
- (void)p_processCurrentSelectedWithResponseModel:(id)a0;
- (void)p_checkTips;
- (void)p_processServerSelectedWithResponseModel:(id)a0;
- (void)p_trackSwitchSettingFromStatus:(id)a0 toStatus:(id)a1 enterMethod:(id)a2 enterFrom:(id)a3;
- (void)p_updateIMSettings;
- (long long)p_itemTypeWithResponseModel:(id)a0;
- (id)itemWithItemType:(long long)a0;
- (void)unselectAllItem;
- (void)submitSettingWithViewModel:(id)a0 oldModel:(id)a1 completion:(id /* block */)a2;
- (void)fetchStrangerReceiveSetting:(id /* block */)a0;
- (void)p_showCloseCheckPanel:(id)a0 oldModel:(id)a1;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)selectedItem;
- (void)selectItem:(id)a0;

@end
