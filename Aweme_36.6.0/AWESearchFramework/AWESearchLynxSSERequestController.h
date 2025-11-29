@class NSString, NSMutableDictionary, AWESearchLynxSSERequestManager;

@interface AWESearchLynxSSERequestController : NSObject <AWESearchLynxSSERequestManagerDelegate, AWESearchLynxSSERequestControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *requestManagerDic;
@property (retain, nonatomic) AWESearchLynxSSERequestManager *lastSSEManager;
@property (copy, nonatomic) id /* block */ receiveFirstDataBlock;
@property (copy, nonatomic) id /* block */ receiveAllDataBlock;
@property (copy, nonatomic) id /* block */ receiveDataBlock;
@property (copy, nonatomic) id /* block */ receiveErrorBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startNewStreamWithCreateEventParams:(id)a0;
- (void)cancelRequestWithCloseEventParams:(id)a0;
- (void)impStartNewStreamWithCreateEventParams:(id)a0;
- (void)impCancelRequestWithCloseEventParams:(id)a0;
- (void)managerDidReceiveFirstDataChunk:(id)a0;
- (void)manager:(id)a0 didReceiveResponseJSON:(id)a1;
- (void)managerDidReceiveAllData:(id)a0;
- (void)manager:(id)a0 didEndReadChunkForError:(id)a1 errorInfo:(id)a2 errorReason:(long long)a3 currentResponse:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
