@class NSString, NSObject;
@protocol OS_nw_connection, EAccountNetworkSocketDelegate;

@interface EAccountNetworkSocket : NSObject

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (copy, nonatomic) id /* block */ receiveMessage;
@property (copy, nonatomic) NSString *message;
@property (weak) id<EAccountNetworkSocketDelegate> delegate;

- (void)cancelCurrentConnection;
- (void)closeNetworkSocketConnect;
- (void)connectNetworkSocketToHost:(id)a0 port:(id)a1 queue:(id)a2;
- (id)dispatchDataFromNsdata:(id)a0;
- (id)nsdataFromDispatchData:(id)a0;
- (void)receiveMsg;
- (void)sendSMessage:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
