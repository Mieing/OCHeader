@class NSString, NSObject;
@protocol OS_dispatch_queue, IESLiveLocalSocketDelegate;

@interface IESLiveLocalSocket : NSObject

@property int socket;
@property int receiveSocket;
@property BOOL working;
@property BOOL connecting;
@property (copy, nonatomic) NSString *applicationGroupIdentifier;
@property (copy, nonatomic) NSString *connectionIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sendQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *receiveQueue;
@property (nonatomic) struct { void *x0; unsigned int x1; unsigned int x2; unsigned int x3; _Atomic int x4; BOOL x5; } *receiveBuffer;
@property (nonatomic) BOOL dataHandleOpt;
@property (weak, nonatomic) id<IESLiveLocalSocketDelegate> delegate;

- (BOOL)setupSocket;
- (BOOL)bindSocket;
- (void)reportTrackWithStatus:(long long)a0 extra:(id)a1;
- (void)closeConnectWithReason:(long long)a0;
- (id)socketPathWithApplicationGroupIdentifier:(id)a0 connectionIdentifier:(id)a1;
- (void)handleReceiveBuffer;
- (id)initWithApplicationGroupIdentifier:(id)a0 connectionIdentifier:(id)a1 delegate:(id)a2;
- (void)closeConnect;
- (void)sendData:(id)a0 head:(struct { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })a1;
- (void)receiveDataFromSocket;
- (void).cxx_destruct;
- (void)dealloc;

@end
