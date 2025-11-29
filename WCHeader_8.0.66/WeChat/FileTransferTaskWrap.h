@class FileTransferTask;
@protocol FileTransferTaskWrapDelegate;

@interface FileTransferTaskWrap : NSObject

@property (retain, nonatomic) FileTransferTask *task;
@property (weak, nonatomic) id<FileTransferTaskWrapDelegate> delegate;

- (id)initWithTask:(id)a0;
- (void)dealloc;
- (void)refreshUI;
- (void)onTaskProgress:(int)a0;
- (void)onTaskCompleted;
- (void)onMessageTransferCreated:(id)a0;
- (void)onMessageTransferStart:(id)a0;
- (void)onMessageTransferStop:(id)a0;
- (void)onMessageTransfer:(id)a0 progressChanged:(int)a1;
- (void)onMessageTransferComplete:(id)a0 error:(id)a1;
- (void)_onMessageTransferComplete:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
