@class NSString, NSURLSessionDataTask;

@interface LiteAppJsApiOpenCustomerServiceChatForFakeNative : LiteAppJsApi {
    NSString *m_url;
    int m_scene;
    NSString *m_entityId;
    BOOL m_showMessageCard;
    NSString *m_sendMsgTitle;
    NSString *m_sendMsgPath;
    NSString *m_sendMsgImageURL;
    NSURLSessionDataTask *m_dataTask;
}

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)getImageDataAndOpenCustomerServiceChat;
- (void)openCustomerServiceChat:(id)a0;
- (id /* block */)getOnClickQuickSendBtnHandleBlockWithAppId:(id)a0 title:(id)a1 path:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
