@class NSMutableDictionary;

@interface ChatFileReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *downloadTasks;

+ (id)commRecordViewParams:(id)a0;
+ (id)commMsgViewParams:(id)a0;

- (id)init;
- (void)dealloc;
- (void)onStartDownload:(unsigned long long)a0 task:(id)a1;
- (void)onStartDownload:(unsigned long long)a0 svrId:(id)a1;
- (void)onFinishDownload:(id)a0;
- (void)onMessageTransferComplete:(id)a0 error:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)onGetSvrIdWithUploadMsg:(id)a0 SvrId:(unsigned long long)a1;
- (void)OnMsgSendSuccess:(id)a0;
- (void)_onMessageEventStep:(unsigned long long)a0 msgWrap:(id)a1;
- (void).cxx_destruct;

@end
