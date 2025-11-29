@class NSMutableDictionary, NSString, NewTipsNetworkLogic, NewTipsUtils;

@interface MMNewTipsMgr : MMUserService <MMServiceProtocol, IMsgExt, NewTipsNetworkLogicDelegate, IExptServiceExt>

@property (retain, nonatomic) NewTipsUtils *tipsUtils;
@property (retain, nonatomic) NewTipsNetworkLogic *networkLogic;
@property (retain, nonatomic) NSMutableDictionary *dicTipsInfo;
@property (retain, nonatomic) NSMutableDictionary *dicPathInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getShowInfoWitPathKey:(id)a0;
- (void)disposeRedPointWithKey:(id)a0;
- (id)getNewTipsInfoWithId:(unsigned int)a0;
- (void)onServiceInit;
- (void)updatePathsInfoWithTipsInfo:(id)a0;
- (void)checkLocalConfigForPath;
- (void)requestLocalTipsWithID:(unsigned int)a0;
- (void)OnGetNewXmlMsg:(id)a0 Type:(id)a1 MsgWrap:(id)a2;
- (void)onGetNewTipsXml:(id)a0;
- (void)disposePreviousTipsWithTipsInfo:(id)a0;
- (void)updateNewTipsInfo:(id)a0;
- (void)updateAndNotifyPathKeysWithTipsInfo:(id)a0;
- (void)onServerRejectShowTipsId:(unsigned int)a0 UID:(id)a1;
- (void)onExptItemListChange;
- (void).cxx_destruct;

@end
