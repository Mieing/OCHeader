@class NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface ServiceAppsLogicImpl : MMObject <WCPayLogicMgrExt, WCPayWalletChangeExt, PBMessageObserverDelegate> {
    NSArray *_serviceAppsList;
    NSMutableArray *_tempList;
    BOOL _isUpdating;
    BOOL _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned int _lastUpdateTime;
    NSMutableArray *_validJumpUrlList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)InitValidJumpUrl;
- (BOOL)NativeUrlIsValid:(id)a0;
- (BOOL)IsServiceAppDataValid:(id)a0;
- (id)getServiceAppsList:(id)a0;
- (BOOL)updateServiceAppsList;
- (BOOL)updateServiceAppsListWithOffset:(unsigned int)a0;
- (id)getAppInfoDataRootDir;
- (void)loadServiceAppsListFromFile;
- (void)saveServiceAppsList;
- (id)GetPathOfServiceAppIcon:(id)a0 IconUrl:(id)a1;
- (void)setServiceAppNotShowNew:(id)a0;
- (void)checkAndUpdateAppIcon;
- (void)getAppIcon:(id)a0 appID:(id)a1;
- (BOOL)makeUrlRequest:(id)a0 userData:(id)a1;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (void)handleUpdateServiceAppsListWithOffsetResp:(id)a0;
- (void)handleNotShowNewLogic;
- (BOOL)handleGetAppIconRsp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)loadData;
- (void)OnSetUserWallet:(id)a0;
- (void)onWCPayWalletChange;
- (void).cxx_destruct;

@end
