@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, SRWebSocketDelegate;

@interface SRDelegateController : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property struct SRDelegateAvailableMethods { unsigned char didReceiveMessage : 1; unsigned char didReceiveMessageWithString : 1; unsigned char didReceiveMessageWithData : 1; unsigned char didOpen : 1; unsigned char didFailWithError : 1; unsigned char didCloseWithCode : 1; unsigned char didReceivePong : 1; unsigned char shouldConvertTextFrameToString : 1; } availableDelegateMethods;
@property (weak, nonatomic) id<SRWebSocketDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)init;
- (void)performDelegateBlock:(id /* block */)a0;
- (void)performDelegateQueueBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
