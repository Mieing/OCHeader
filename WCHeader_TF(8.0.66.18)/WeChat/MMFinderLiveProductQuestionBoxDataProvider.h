@class MMLiveCommentDataMgr, MMFinderLiveProductQuestionBoxItem, MMFinderLiveTaskId;

@interface MMFinderLiveProductQuestionBoxDataProvider : NSObject <IMsgExt, WCFinderLiveMsgSessionMgrExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMFinderLiveProductQuestionBoxItem *currProductQueBox;
@property (readonly, nonatomic) MMLiveCommentDataMgr *commentDataMgr;
@property (nonatomic) BOOL isLoadingPreMsg;
@property (nonatomic) BOOL isLoadingRecentMsg;
@property (readonly, nonatomic) BOOL isLoadingMsg;
@property (copy, nonatomic) id /* block */ unReadCntUpdateCallback;
@property (copy, nonatomic) id /* block */ currSessionInitiatedCallback;

- (id)initWithTaskId:(id)a0;
- (void)registerExtensions;
- (void)changeToProductQueBox:(id)a0;
- (void)checkCurrProductQueBoxChanged:(id /* block */)a0;
- (void)clearUnreadCountForSessionId:(id)a0;
- (BOOL)checkHasLocalLiveMsgSessions;
- (void)loadRecentMsgs:(int)a0 completion:(id /* block */)a1;
- (void)loadPreMsgs:(int)a0 from:(unsigned int)a1 completion:(id /* block */)a2;
- (id)transferMessageWrapsToComments:(id)a0 boxId:(id)a1 msgFromDBLoad:(BOOL)a2;
- (id)transferMessageWrapToComment:(id)a0 boxId:(id)a1 msgFromDBLoad:(BOOL)a2;
- (void)clearLastProductQueBoxDatas;
- (void)configNewProductQueBox:(id)a0;
- (void)updateCommentStatus:(id)a0 wrapMsg:(id)a1 modifySucc:(BOOL)a2 modifyFail:(BOOL)a3;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)onProductQuestionBoxRequestPreMsgsFromComment:(id)a0 count:(int)a1 taskId:(id)a2 boxId:(id)a3;
- (void)onProductQuestionBoxLoadRecentMsgsWithTaskId:(id)a0 boxId:(id)a1;
- (void)onFinderLiveMsgSessionUnReadCntUpdated:(unsigned int)a0 sessionId:(id)a1;
- (void)onFinderLiveMsgSessionInitiated:(id)a0;
- (void).cxx_destruct;

@end
