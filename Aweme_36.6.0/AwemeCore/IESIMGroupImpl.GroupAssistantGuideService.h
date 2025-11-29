@interface IESIMGroupImpl.GroupAssistantGuideService : HTSService <IESIMMessageSenderDelegate, IESIMGroupAssistantGuideService> {
    void /* unknown type, empty encoding */ delegates;
}

- (void)iesim_didReceiveSendMessageResponse:(id)a0;
- (void)iesim_didReceiveAsyncSendMessageResponse:(id)a0;
- (void)showGuidePanelWithCon:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)markDidSetGroupAssistantIsOpenIfNeedWithCon:(id)a0;
- (BOOL)enableShowGuidePanelWithCon:(id)a0;
- (BOOL)enableInsertNoticeFeatureInCon:(id)a0;
- (BOOL)enableInsertNoticeWithType:(unsigned long long)a0 lastUnreadCount:(id)a1 con:(id)a2;
- (BOOL)isGroupAssistantGuideNoticeMessage:(id)a0 inCon:(id)a1;
- (void)insertNoticeWithWithType:(unsigned long long)a0 con:(id)a1;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
