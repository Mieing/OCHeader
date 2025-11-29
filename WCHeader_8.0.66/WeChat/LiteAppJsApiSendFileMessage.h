@class MMLiteAppDownloadMgr, NSString, ForwardMessageLogicController, NSMutableDictionary, NSDictionary;

@interface LiteAppJsApiSendFileMessage : LiteAppJsApi <ForwardMessageLogicDelegate, MMLiteAppDownloadMgrDelegate> {
    ForwardMessageLogicController *_forwardMsgLogic;
    NSMutableDictionary *_result;
    NSString *_fileType;
    NSString *_videoPath;
    NSDictionary *_params;
}

@property (retain, nonatomic) MMLiteAppDownloadMgr *downloadMgr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)sendImageMessage:(id)a0;
- (void)sendVideoMessage:(id)a0;
- (void)getFileDataFromCDN:(id)a0 filePath:(id)a1;
- (void)forwardImageMessage:(id)a0 fileData:(id)a1;
- (void)forwardMessage:(id)a0 isImage:(BOOL)a1;
- (void)addTailInfo:(id)a0;
- (void)forwardVideoMessage:(id)a0 filePath:(id)a1;
- (void)forwardVideoMessageWithThumb:(id)a0;
- (id)ConvertLiteAppImage2MsgWrapWithImage:(id)a0 retErrMsg:(id *)a1;
- (id)ConvertLiteAppVideo2MsgWrapWithVideoPath:(id)a0 thumbImage:(id)a1;
- (id)ConvertLiteAppVideo2MsgWrapWithVideoInfo:(id)a0;
- (void)onDownloadTaskCompletion:(id)a0 errType:(unsigned long long)a1 errCode:(int)a2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void).cxx_destruct;

@end
