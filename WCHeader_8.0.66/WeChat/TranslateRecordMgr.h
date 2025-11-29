@class NSString, NSMutableDictionary;

@interface TranslateRecordMgr : MMUserService <MMServiceProtocol, IMMNewSessionMgrExt, IMsgExt, PBMessageObserverDelegate> {
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

- (void)stopAllScrollUp:(id)a0;
- (void)translateRecordItem:(id)a0;
- (void)retranslateRecordItem:(id)a0;
- (void)reportTranslationError:(id)a0;
- (void)tryTranslateRecordItems;
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
- (void)notifyTranslateRecordItemDataMsgChanged:(id)a0;
- (void)asyncNotifyTranslateRecordItemDataMsgChanged:(id)a0;
- (void)responseForTransTextResponse:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void).cxx_destruct;

@end
