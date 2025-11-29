@class MemoryMappedKV, NSString;

@interface TemplateMsgService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) MemoryMappedKV *mmkv;
@property (retain, nonatomic) NSString *enterServiceNoticeBoxSessionId;
@property (retain, nonatomic) NSString *enterTemplateMsgAuthMgrSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)updateMsgExpand:(id)a0 localId:(unsigned int)a1;
- (BOOL)wasMsgExpanded:(id)a0 localId:(unsigned int)a1;
- (void)updateReaderFooterClick:(id)a0 localId:(unsigned int)a1;
- (BOOL)wasReaderFooterClicked:(id)a0 localId:(unsigned int)a1;
- (void)report11608:(id)a0 userName:(id)a1 actionType:(unsigned long long)a2 containerType:(unsigned int)a3 sessionId:(unsigned int)a4;
- (unsigned long long)clickContentHandleByMsg:(id)a0 viewController:(id)a1;
- (unsigned long long)clickContentHandleByMsgId:(id)a0 localId:(long long)a1 viewController:(id)a2;
- (unsigned long long)clickContentImpl:(id)a0 viewController:(id)a1;
- (void)getWeappContactForUsername:(id)a0 handler:(id /* block */)a1;
- (void)jumpWeappOpWrap:(id)a0 weappOpWrap:(id)a1 viewController:(id)a2;
- (id)getGameCenterWebViewController:(id)a0;
- (id)getWebViewController:(id)a0 readerWrap:(id)a1 url:(id)a2 forPeek:(BOOL)a3 viewController:(id)a4;
- (id)getReaderUrlWithUrl:(id)a0 nsUsername:(id)a1;
- (id)webViewExtraInfoWithReaderWrap:(id)a0 readerWrap:(id)a1 viewController:(id)a2;
- (void).cxx_destruct;

@end
