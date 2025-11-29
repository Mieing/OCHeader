@class NSString, ForwardMessageLogicController, WAReportImageEntranceShareItem, WAScreenshotContextInfo;

@interface WAJSEventHandler_shareImageMessageToSpecificContact : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate, IHttpCacheExt> {
    NSString *_imagePath;
    NSString *_cacheKey;
    ForwardMessageLogicController *m_forwardMessageLogicController;
    WAReportImageEntranceShareItem *_reportItem;
    NSString *_username;
    NSString *_openId;
    WAScreenshotContextInfo *_waInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleJSEvent:(id)a0;
- (void)shareImageWithData:(id)a0 username:(id)a1 openId:(id)a2 waInfo:(id)a3;
- (void)shareImageWithData:(id)a0 username:(id)a1 waInfo:(id)a2;
- (void)shareImageWithData:(id)a0 waInfo:(id)a1 contact:(id)a2;
- (unsigned long long)getImageDataWithHttpUrl:(id)a0 dataPtr:(id *)a1;
- (id)getImageDataWithLocalId:(id)a0;
- (id)getImageDataWithPackageRelativeURL:(id)a0;
- (id)genKeyForUrl:(id)a0;
- (id)getWAScreenshotContextInfoWithEntrancePath:(id)a0;
- (void)OnHttpGetFinish:(id)a0 response:(id)a1 ErrNo:(int)a2 isWebp:(BOOL)a3;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (id)getCurrentViewController;
- (void)fetchUsernameWithOpenId:(id)a0 appId:(id)a1 complete:(id /* block */)a2;
- (void)updateReportItemWithContact:(id)a0 isSuccess:(int)a1;
- (void).cxx_destruct;

@end
