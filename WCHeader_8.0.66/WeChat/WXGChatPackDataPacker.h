@class NSString, NSObject;
@protocol OS_dispatch_queue, WXGChatPackDataPackerDelegate;

@interface WXGChatPackDataPacker : NSObject

@property (copy, nonatomic) NSString *dataDirPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *chatPackQueue;
@property BOOL bPacking;
@property (weak, nonatomic) id<WXGChatPackDataPackerDelegate> delegate;
@property (nonatomic) BOOL bZipFile;
@property (copy, nonatomic) NSString *wechatLogFile;

+ (BOOL)p_writeMsgListDataPush:(id)a0 toPath:(id)a1;
+ (BOOL)p_writeMediaDataPush:(id)a0 toPath:(id)a1;

- (id)init;
- (void)mainThreadCallDelegate:(BOOL)a0;
- (void)mainThreadSyncProgress:(float)a0;
- (void)startPackDataInDir:(id)a0 withInfo:(id)a1;
- (void)stopPackData;
- (id)getZipContentPath;
- (id)getContentPath;
- (id)getSessionDir:(id)a0;
- (id)getSessionMediaDir:(id)a0;
- (id)getSessionMsgDir:(id)a0;
- (id)msgListPathForSession:(id)a0 dataID:(id)a1;
- (id)mediaPathForSession:(id)a0 mediaID:(id)a1;
- (id)getValidateFilePath;
- (void).cxx_destruct;

@end
