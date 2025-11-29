@class AWEIMMessage, AWEIMMessageAttachmentDownloadViewModel, FBKVOController;

@interface AWEIMMessageAttachmentDownloadManagerHelper : NSObject

@property (retain, nonatomic) FBKVOController *vmKVO;
@property (retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM;
@property (retain, nonatomic) AWEIMMessage *message;

+ (void)attachmentExistsWithMessage:(id)a0 remoteURL:(id)a1 optionalMD5:(id)a2 callback:(id /* block */)a3;

- (BOOL)downloadFileWithMessage:(id)a0 remoteURL:(id)a1 optionalMD5:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end
