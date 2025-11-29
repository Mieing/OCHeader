@class NSMutableDictionary, NSMutableArray;

@interface AWEIMMessageAttachmentUploadQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *uploadVMDict;
@property (retain, nonatomic) NSMutableDictionary *uploaderDict;
@property (retain, nonatomic) NSMutableArray *waitingQueue;
@property (nonatomic) long long messageType;

- (id)createUploadFileVM:(id)a0;
- (id)uploadVMWithFileID:(id)a0;
- (void)cancelUploadFile:(id)a0;
- (void)removeUploaderAndViewModel:(id)a0;
- (void)setUploader:(id)a0 fileID:(id)a1;
- (void)pushItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)popItem;
- (BOOL)isUploading;

@end
