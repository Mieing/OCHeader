@class MessageTransferTask, NSString;

@interface LiteAppJsApiStartDownloadChatFile : LiteAppJsApi <MessageTransferMgrExt>

@property (retain, nonatomic) MessageTransferTask *task;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onMessageTransferCreated:(id)a0;
- (void)onMessageTransferStart:(id)a0;
- (void)onMessageTransferStop:(id)a0;
- (void)onMessageTransfer:(id)a0 progressChanged:(int)a1;
- (void)onMessageTransferComplete:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
