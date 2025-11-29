@class NSString, NSDictionary, CMessageWrap, NSMutableData, NSURLConnection, ForwardMessageLogicController;

@interface LiteAppJsApiSendAppMessage : LiteAppJsApi <NSURLConnectionDelegate, ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (retain, nonatomic) NSURLConnection *m_connecttion;
@property (retain, nonatomic) NSDictionary *m_curExtraData;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (retain, nonatomic) NSMutableData *m_cachedData;
@property (nonatomic) BOOL skipCache;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL isRecentForward;
@property (nonatomic) BOOL isRealFilePathNil;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)clearCurData;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)appendNewImageData:(id)a0 imageData:(id)a1;
- (void)uploadOldImageToCDN:(id)a0 imageData:(id)a1 newImageData:(id)a2;
- (void)sendAppMessage:(id)a0 imageData:(id)a1;
- (void)sendAppMessage:(id)a0 imageData:(id)a1 oldImageCDNInfo:(id)a2;
- (void)sendMessage:(id)a0 extraData:(id)a1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)dealloc;
- (void)stopForcedRotationToPortrait;
- (void).cxx_destruct;

@end
