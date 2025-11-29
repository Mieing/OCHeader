@class NSString, NSDictionary;

@interface WAJSEventHandler_openCustomerServiceChat : WAJSEventHandler_BaseEvent {
    NSString *m_url;
    int m_scene;
    NSString *m_entityId;
    BOOL m_showMessageCard;
    NSString *m_sendMsgTitle;
    NSString *m_sendMsgPath;
    NSString *m_sendMsgImageURL;
    NSDictionary *m_sendMsgParam;
    NSString *m_sendMsgHintTitle;
}

@property (retain, nonatomic) NSString *finderContext;
@property (nonatomic) BOOL bSkipBindStateCheck;
@property (nonatomic) BOOL bShouldUseEntityInParam;
@property (nonatomic) BOOL bCanHandleQuickMsgByBusiness;

- (void)handleJSEvent:(id)a0;
- (id)getImageDataWithImageUrl:(id)a0;
- (BOOL)checkIsBindEntityWithAppId:(id)a0 corpId:(id)a1 url:(id)a2;
- (void)onCheckBindEntityCgiResponse:(id)a0;
- (void)openCustomerServiceChat;
- (id /* block */)getOnClickQuickSendBtnHandleBlockWithWeappContact:(id)a0 title:(id)a1 path:(id)a2 extraParam:(id)a3;
- (void).cxx_destruct;

@end
