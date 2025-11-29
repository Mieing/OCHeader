@class NSString, TIMXSDKInstance;

@interface TIMXMessageUpdater : NSObject <TIMXMessageUpdaterProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPropertyItemForMessage:(id)a0 inConversation:(id)a1 arrNewPropertyModify:(id)a2 allowRefreshTicket:(BOOL)a3 onCompletion:(id /* block */)a4;
- (void)modifyPropertyItemsForMessage:(id)a0 inConversation:(id)a1 modifyProperties:(id)a2 force:(BOOL)a3 onCompletion:(id /* block */)a4;
- (void)requestMessagePropertyWithStatusArray:(id)a0;
- (void)modifyPropertyItemsForMessage:(id)a0 inConversation:(id)a1 modifyProperties:(id)a2 dbMsgProperty:(id)a3 force:(BOOL)a4 onCompletion:(id /* block */)a5;
- (void)requestWithMessageModifyRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)recallMessage:(id)a0 inConversation:(id)a1 role:(long long)a2 completion:(id /* block */)a3;
- (void)markMessageInConversation:(id)a0 serverMessageId:(long long)a1 doAction:(BOOL)a2 actionType:(unsigned long long)a3 sortTime:(long long)a4 completion:(id /* block */)a5;
- (void)requestAllFailedMessageProperty;
- (void)requestAllMessageProperty;
- (void)modifyMessageWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
