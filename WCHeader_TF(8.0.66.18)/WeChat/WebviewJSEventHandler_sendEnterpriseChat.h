@class NSDictionary, JSEvent, NSURLConnection, NSMutableData;

@interface WebviewJSEventHandler_sendEnterpriseChat : WebviewJSEventHandlerBase {
    NSURLConnection *_connection;
    JSEvent *_curEvent;
    NSDictionary *_curExtraData;
    NSMutableData *_recData;
}

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)processTextMsg;
- (void)processLinkMsg;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)sendAppMessage:(id)a0 extraData:(id)a1 imageData:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;

@end
