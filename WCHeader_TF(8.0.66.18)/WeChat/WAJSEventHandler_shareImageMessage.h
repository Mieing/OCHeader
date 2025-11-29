@class NSString, ForwardMessageLogicController, WAReportImageEntranceShareItem;

@interface WAJSEventHandler_shareImageMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt> {
    NSString *_imagePath;
    NSString *_cacheKey;
    ForwardMessageLogicController *m_forwardMessageLogicController;
    BOOL _needShowEntrance;
    NSString *_entrancePath;
    WAReportImageEntranceShareItem *_reportItem;
    BOOL _useForChatTool;
}

@property (nonatomic) BOOL isToSpecificContact;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *chatToolMode;
@property (retain, nonatomic) NSString *m_rawRelativeURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)shareImage:(id)a0;
- (id)getRawRelativeURL;
- (void)shareImageWithData:(id)a0 needShowEntrance:(BOOL)a1 entrancePath:(id)a2;
- (unsigned long long)getImageDataWithHttpUrl:(id)a0 dataPtr:(id *)a1;
- (id)getImageDataWithLocalId:(id)a0;
- (id)getImageDataWithPackageRelativeURL:(id)a0;
- (id)genKeyForUrl:(id)a0;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)endInForward:(id /* block */)a0;
- (id)getCurrentViewController;
- (void).cxx_destruct;

@end
