@class NSMutableDictionary, WCLanTransferSSCQueue, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WCLanTransferClientService : MMUserService <WCLanTransferSSCDelegate, MMServiceProtocol>

@property (retain, nonatomic) WCLanTransferSSCQueue *sscQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lanTransferClientQueue;
@property (retain, nonatomic) NSMutableDictionary *clientTaskInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canMsgWrapUseLanTransfer:(id)a0;

- (id)init;
- (void)checkOldTaskInfo;
- (void)addMessageWrap:(id)a0;
- (void)stopMessageWrap:(id)a0;
- (void)onLanTransferSSC:(id)a0 downloadSuccess:(BOOL)a1;
- (void).cxx_destruct;

@end
