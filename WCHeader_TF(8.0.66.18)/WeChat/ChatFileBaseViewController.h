@class MMScrollActionSheet, FileTransferLogic, FileTransferTask, FileTransferTaskWrap, NSString;

@interface ChatFileBaseViewController : MMUIViewController <FileTransferTaskWrapDelegate, IMsgRevokeExt, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>

@property (retain, nonatomic) FileTransferTaskWrap *taskWrap;
@property (retain, nonatomic) FileTransferLogic *logic;
@property (retain, nonatomic) MMScrollActionSheet *scrollActionSheet;
@property (readonly, nonatomic) FileTransferTask *task;
@property (copy, nonatomic) NSString *chatContactUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTask:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)refreshUI;
- (void)onTaskProgress:(int)a0;
- (void)onTaskCompleted;
- (void)openTaskFile:(BOOL)a0 fromUserClick:(BOOL)a1;
- (BOOL)canOpMore;
- (void)opMore;
- (void)onForwardToContact:(id)a0;
- (void)reportMenuOp:(unsigned long long)a0;
- (void)reportMenuOp:(unsigned long long)a0 fileName:(id)a1 fileSize:(unsigned long long)a2 fileType:(id)a3;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)startTask;
- (void)stopTask;
- (void)fileTransferTaskUpdated:(id)a0;
- (void)fileTransferTask:(id)a0 onProgress:(int)a1;
- (void)fileTransferTaskCompleted:(id)a0;
- (void)OnMsgRevoked:(id)a0 n64MsgId:(long long)a1;
- (void).cxx_destruct;

@end
