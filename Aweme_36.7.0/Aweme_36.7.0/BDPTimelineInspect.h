@class NSObject, NSString, SRWebSocket, BDPUniqueID, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDPTimelineInspect : NSObject <SRWebSocketDelegate> {
    SRWebSocket *_webSocket;
    unsigned long long _status;
    id /* block */ _combineParamsBlk;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSMutableArray *points;
@property (weak, nonatomic) id observerToken;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)webSocket:(id)a0 didReceiveMessage:(id)a1;
- (void)webSocket:(id)a0 didReceiveMessageWithData:(id)a1;
- (void)webSocketDidOpen:(id)a0;
- (void)webSocket:(id)a0 didFailWithError:(id)a1;
- (void)webSocket:(id)a0 didCloseWithCode:(long long)a1 reason:(id)a2 wasClean:(BOOL)a3;
- (BOOL)sendString:(id)a0 error:(id *)a1;
- (void)handleIDEDisconncetMsg;
- (id)initWithServerUrl:(id)a0 uniqueId:(id)a1 combineParamsBlk:(id /* block */)a2;
- (void).cxx_destruct;
- (void)addPoint:(id)a0;
- (void)dealloc;
- (void)addPoints:(id)a0;

@end
