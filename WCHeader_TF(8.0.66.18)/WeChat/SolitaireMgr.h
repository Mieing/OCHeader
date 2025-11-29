@class SolitaireAnalysiser, NSMutableDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SolitaireMgr : MMUserService <IMsgExt, SolitaireAnalysiserDelegate, IMMNewSessionMgrExt, OpenUploadMgrExt, ISendMessageExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *dicSessionHandlers;
@property (retain, nonatomic) NSMutableDictionary *dicFoldInfo;
@property (retain, nonatomic) NSMutableSet *unFoldSet;
@property (retain, nonatomic) SolitaireAnalysiser *analysiser;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)insertNeedSolitaireAnalysisMsgRecordWithChatName:(id)a0 LocalId:(unsigned int)a1;
- (id)getSolitaireSessionHandlerWithUserName:(id)a0;
- (id)getSolitaireListWithChatName:(id)a0;
- (BOOL)isSolitaireWithMessage:(id)a0;
- (void)analysisSolitaireWithContent:(id)a0 ChatName:(id)a1 Block:(id /* block */)a2;
- (id)getSolitaireWithMessageWrap:(id)a0;
- (void)reportWhenJoinSolitaire:(id)a0;
- (id)getNewestSolitaireObj:(id)a0;
- (id)getXmlInfoWithSolitaireObj:(id)a0;
- (id)getFoldInfoWithMsg:(id)a0;
- (void)setUnFoldWithMsg:(id)a0;
- (void)cleanAllUnFold;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0 DelAll:(BOOL)a1;
- (BOOL)onAnalysisSolitaireInfoObj:(id)a0 MsgWrap:(id)a1;
- (void)onActiveUsrNameChange:(id)a0 curUsrName:(id)a1;
- (void)onSendAppMsgSucc:(id)a0;
- (void)OnSendMessageSuccess:(id)a0;
- (void)updateSolitaireSvrIdWithMessage:(id)a0;
- (void).cxx_destruct;

@end
