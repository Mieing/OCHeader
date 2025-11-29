@class NSString, AWEIMMessageAttachmentUploadQueue;

@interface AWEIMMessageAttachmentUploadOptManager : NSObject <BDVideoUploadEventManagerProtocol>

@property (retain, nonatomic) AWEIMMessageAttachmentUploadQueue *audioUploadQueue;
@property (retain, nonatomic) AWEIMMessageAttachmentUploadQueue *locationUploadQueue;
@property (retain, nonatomic) AWEIMMessageAttachmentUploadQueue *imageUploadQueue;
@property (retain, nonatomic) AWEIMMessageAttachmentUploadQueue *BDUploadQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)eventManagerDidUpdate:(id)a0;
- (id)createUploadFileVM:(id)a0 messageType:(long long)a1;
- (id)uploadFileWithFileID:(id)a0 quickData:(id)a1 messageType:(long long)a2;
- (void)p_uploadErrorContentLog:(id)a0 messageType:(long long)a1;
- (id)uploadCommonFileWithFileID:(id)a0 MD5:(id)a1;
- (id)getUploadVMWithFileID:(id)a0 messageType:(long long)a1;
- (id)p_uploadFileWithFileID:(id)a0 quickData:(id)a1 MD5:(id)a2 messageType:(long long)a3;
- (id)p_streamUploadVideoWithFileID:(id)a0 quickData:(id)a1 fileReader:(id)a2;
- (id)uploadFileWithPath:(id)a0 onFinish:(id /* block */)a1;
- (id)streamUploadVideoWithFileID:(id)a0 quickData:(id)a1 fileReader:(id)a2;
- (id)queueForMessageType:(long long)a0;
- (id)p_uploadFileWithTaskID:(id)a0 filePath:(id)a1 onFinish:(id /* block */)a2;
- (id)p_uploadAttachmentWithContext:(id)a0;
- (id)p_uploadNextWithQueue:(id)a0;
- (id)p_makeUploaderWithContext:(id)a0;
- (void)cancelUploadFile:(id)a0 messageType:(long long)a1;
- (id)uploadAttachmentWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
