@class NSString, JSEvent;

@interface WebviewJSEventHandler_getStoreEmoticonImage : WebviewJSEventHandlerBase <IStoreEmotionSingleDownloadMgrExt> {
    NSString *m_md5;
    JSEvent *m_event;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)startDownloadEmoticonWithMd5:(id)a0 encryptUrl:(id)a1 aesKey:(id)a2 productId:(id)a3 designerId:(id)a4;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)a0;
- (void)onSingleEmotionDownloadOkWithWrap:(id)a0 imageData:(id)a1;
- (void)asyncHandle_callbackEvent:(id)a0 result:(id)a1;
- (void)asyncHandle_callbackFailEvent:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
