@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, WCLanTransferSSSDelegate;

@interface WCLanTransferSSSQueue : NSObject <CNetworkStatusExt>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sssQueue;
@property (retain, nonatomic) NSMutableDictionary *taskInfoDict;
@property (retain, nonatomic) NSMutableDictionary *taskInfoStartDict;
@property (copy, nonatomic) NSString *localServer;
@property (copy, nonatomic) NSString *encryKey;
@property (weak, nonatomic) id<WCLanTransferSSSDelegate> delegate;

- (id)addTaskInfo:(id)a0;
- (void)p_tryStopServer;
- (void)p_forceStopServer;
- (void)handleSmartServerSendSuccess:(id)a0;
- (void)handleSmartServerSendFail:(id)a0 errorCode:(int)a1;
- (void)handleSmartServerProgressChange:(id)a0 totalSize:(unsigned long long)a1 successSize:(unsigned long long)a2;
- (void)ReachabilityChange:(unsigned int)a0;
- (void).cxx_destruct;

@end
