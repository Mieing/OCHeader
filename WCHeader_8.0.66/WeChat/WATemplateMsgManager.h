@class NSString, NSMutableDictionary, WATemplateMsgInfoWrap, NSMutableArray;

@interface WATemplateMsgManager : MMUserService <PBMessageObserverDelegate, MMKernelExt, IContactMgrExt, IMsgExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *debug_unreadUsernames;
@property (retain, nonatomic) NSString *debug_lastUsername;
@property (nonatomic) unsigned long long debug_unreadMsgCount;
@property (retain, nonatomic) NSMutableDictionary *debug_fakeTemplateMsgDic;
@property (retain, nonatomic) NSMutableArray *debug_msgArray;
@property (nonatomic) BOOL isManulLogined;
@property (nonatomic) BOOL isContactListUpdated;
@property (retain, nonatomic) WATemplateMsgInfoWrap *infoWrap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateTemplateMsgNotifyEnable:(unsigned long long)a0;
- (void)batchUpdateAWeAppTemplateMsgStatusForAppArray:(id)a0;
- (void)batchUpdateTemplateMsgNotifyEnable:(unsigned long long)a0 audioNotifyEnable:(unsigned long long)a1 msgStatusForApps:(id)a2;
- (void)getTemplateMsgMngInfoFromSvr:(unsigned int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleGetServiceNotifyOptions:(id)a0;
- (void)handleBatchSwitchServiceNotifyOption:(id)a0;
- (void)handleUpdateSwitchServiceSuccess:(id)a0;
- (void)handleUpdateSwitchServiceFail:(id)a0;
- (void)saveTemplateMsgMngInfoToLocal:(id)a0;
- (BOOL)getTemplateMsgNotifyStatusFromLocal;
- (BOOL)getTemplateMsgAudioNotifyStatusFromLocal;
- (id)getTemplateMsgBanListFromLocal;
- (id)getTemplateMsgMngInfoWrapFromLocal;
- (BOOL)isWeAppInTemplateMsgBanListFromLocal:(id)a0;
- (BOOL)ifUserNameInBanListWithUserName:(id)a0 banList:(id)a1;
- (void)modifyServiceNotificationContactWithNotifyStatus:(BOOL)a0;
- (void)modifyContactOptForUsername:(id)a0 withOpt:(unsigned int)a1;
- (void)onChangeBanListWithChangedArray:(id)a0;
- (BOOL)isExistTemplateMsgAudioNotifyRecord:(id)a0;
- (void)addTemplateMsgAudioNotifyRecord:(id)a0;
- (void)onManulLoginOK;
- (void)onContactListUpdate:(unsigned int)a0;
- (void)tryGetTemplateMsgMngInfoFromSvr;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnGetWXAPayInfoMsg:(id)a0;
- (void)showLocalNotificationWithInfo:(id)a0 msgWrap:(id)a1;
- (void).cxx_destruct;

@end
