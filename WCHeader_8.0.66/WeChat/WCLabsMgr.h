@class WCLabsCommonInfo, NSString, NSMutableDictionary, NSMutableArray;

@interface WCLabsMgr : MMUserService <IExptServiceExt, MMServiceProtocol> {
    NSMutableDictionary *_labsAppItemDic;
    NSMutableArray *_onlineLabsItems;
    NSMutableArray *_offlineLabItems;
    WCLabsCommonInfo *_labsCommonInfo;
    NSMutableArray *_clearedRedDotLabsAppidAryInLab;
    NSMutableArray *_clearedRedDotLabsAppidAryInAppEntrance;
    NSMutableArray *_redDotFromClientIdList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)clearAllData;
- (void)loadData;
- (BOOL)isExpRunningWithLabAppid:(id)a0;
- (BOOL)shouldShowEntranceWithLabAppid:(id)a0;
- (void)markLabAppClickWithAppid:(id)a0;
- (void)updateLabAppEntranceWithAppid:(id)a0 switchValue:(BOOL)a1 sync:(BOOL)a2;
- (id)getLabsAppItemByAppid:(id)a0;
- (BOOL)shouldShowWCLabEntrance;
- (id)getOnlineLabsItems;
- (id)getOfflineLabItems;
- (void)saveLabsAppItemDic;
- (void)markShowLabsTip;
- (BOOL)shouldShowRedDotInWechatLabEntrance;
- (BOOL)shouldShowRedDotInWechatLabsCellWithAppid:(id)a0;
- (void)tryMarkClearRedDotInWechatLabsCellWithAppid:(id)a0;
- (BOOL)shouldShowNewRedDotInWechatLabEntrance;
- (void)tryMarkClearNewRedDotInWechatLabEntrance;
- (void)updateOnlineOffLineLabItems;
- (id)getExpItemsArray;
- (void)onGetABTestExpLabsItems:(id)a0 expiredExpids:(id)a1 isAutoGet:(BOOL)a2;
- (void)updateWCLabByXExpt:(id)a0 deleteExptIds:(id)a1 andExptFlag:(unsigned int)a2 andAppIdList:(id)a3;
- (void)updateRedpointForId:(id)a0;
- (void).cxx_destruct;

@end
