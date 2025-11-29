@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMMessageAttachmentUploadManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uploadersDictionaryAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *uploaders;
@property (retain, nonatomic) NSMutableDictionary *uploadersHolder;
@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (nonatomic) BOOL concurrentUpload;

+ (id)sharedInstance;

- (void)removeUploader:(id)a0;
- (id)createUploadFileVM:(id)a0;
- (id)uploadFileWithFileID:(id)a0 quickData:(id)a1 messageType:(long long)a2;
- (void)p_uploadErrorContentLog:(id)a0 messageType:(long long)a1;
- (id)uploadCommonFileWithFileID:(id)a0 MD5:(id)a1;
- (id)uploadVMWithFileID:(id)a0;
- (id)p_uploadersValueForKey:(id)a0;
- (void)p_setUploadersValue:(id)a0 forKey:(id)a1;
- (id)p_uploadFileWithFileID:(id)a0 quickData:(id)a1 messageType:(long long)a2;
- (id)p_uploadFileWithFileID:(id)a0 quickData:(id)a1 MD5:(id)a2 messageType:(long long)a3;
- (id)p_uploadFileWithPath:(id)a0 taskID:(id)a1 onFinish:(id /* block */)a2;
- (id)uploadNext;
- (void)p_removeUploadersValueForKey:(id)a0;
- (id)p_streamUploadVideoWithFileID:(id)a0 quickData:(id)a1 fileReader:(id)a2;
- (void)cancelUploadFile:(id)a0;
- (id)uploadFileWithPath:(id)a0 onFinish:(id /* block */)a1;
- (id)streamUploadVideoWithFileID:(id)a0 quickData:(id)a1 fileReader:(id)a2;
- (id)makeUploaderWithContext:(id)a0;
- (id)uploadAttachmentWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isUploading;

@end
