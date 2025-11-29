@class NSString, MMContext, NSDate, WXGSpeedFilter;
@protocol LocalAreaNetworkServerDelegate;

@interface LocalAreaNetworkServer : MMObject <C2ObjcServerCallBackExt> {
    NSString *client_ip;
    unsigned short client_port;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    NSDate *m_serverConnectDate;
}

@property (weak, nonatomic) MMContext *preContext;
@property (weak, nonatomic) id<LocalAreaNetworkServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)stopServer;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)onSwitchContext;
- (BOOL)startServer:(id *)a0 port:(unsigned short *)a1;
- (unsigned long long)sendData:(id)a0 andLength:(unsigned int)a1;
- (void)onRecv:(id)a0 port:(unsigned short)a1 data:(id)a2 length:(unsigned int)a3;
- (void)onConnected:(id)a0 port:(unsigned short)a1;
- (void)onDisconnect:(id)a0 port:(unsigned short)a1;
- (float)getServerSendSpeed:(unsigned long long *)a0;
- (float)getServerReceiveSpeed:(unsigned long long *)a0;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getServerOpenTime;
- (void).cxx_destruct;

@end
