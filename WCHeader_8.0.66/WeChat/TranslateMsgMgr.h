@class NSString, NSMutableDictionary;

@interface TranslateMsgMgr : MMUserService <MMServiceProtocol, IMMNewSessionMgrExt, IMsgExt, PBMessageObserverDelegate> {
    NSMutableDictionary *_dicSessionTransInfos;
    NSMutableDictionary *_dicSequenceWaitTask;
    NSMutableDictionary *_dicSequenceRunningTask;
    unsigned int _sequence;
    BOOL _isWorking;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hideLoadingOn;

- (void)changeLanguageAndCleanAllCache;
- (void)stopAllScrollUp:(id)a0;
- (id)getRealContentWithMsg:(id)a0;
- (void)translateMsg:(id)a0;
- (void)translateMsg:(id)a0 translateNow:(BOOL)a1 hideLoading:(BOOL)a2;
- (void)tryTranslateMsgs;
- (void)retranslateMsg:(id)a0;
- (void)reportTranslationError:(id)a0 errorType:(unsigned int)a1;
- (id)getTranslateInfo:(id)a0;
- (BOOL)showTranslatedTextNow:(id)a0;
- (BOOL)taskInQueue:(id)a0;
- (id)pathForSessionTransInfos:(id)a0;
- (void)loadSessionTransInfos:(id)a0;
- (void)saveSessionTransInfos:(id)a0;
- (void)resetTranslatingStatus:(id)a0;
- (void)onActiveUsrNameChange:(id)a0 curUsrName:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)notifyTranslateMsgChanged:(id)a0;
- (void)asyncNotifyTranslateMsgChanged:(id)a0;
- (void)responseForTransTextResponse:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)removeAllCacheForUsr:(id)a0;
- (void).cxx_destruct;

@end
