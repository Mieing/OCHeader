@class NSString;
@protocol WARemoteDebugChannelDelegate;

@interface WARemoteDebugChannel : NSObject {
    unsigned long long _totalSendLength;
    unsigned long long _lastTotalSendLength;
    unsigned long long _totalReciveLength;
    unsigned long long _lastTotalReciveLength;
}

@property (weak, nonatomic) id<WARemoteDebugChannelDelegate> delegate;
@property (retain, nonatomic) NSString *wsEndPoint;
@property (nonatomic) unsigned int proxyPort;

- (id)initWithWsEndPoint:(id)a0 delegate:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (BOOL)isConnected;
- (void)openChannel;
- (void)closeChannel;
- (void)sendString:(id)a0;
- (void)sendData:(id)a0;
- (void)addSendLength:(unsigned long long)a0;
- (id)getTotalSendLength;
- (void)addReceiveLength:(unsigned long long)a0;
- (id)getTotalReceiveLength;
- (void).cxx_destruct;

@end
