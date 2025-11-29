@class NSString, MMTimer, WXGSpeedFilter, NSDate;
@protocol LocalAreaNetworkClientDelegate;

@interface LocalAreaNetworkClient : MMObject <C2ObjcClientCallBackExt> {
    unsigned long long m_totalReciveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    NSDate *m_realSendStartDate;
    NSDate *m_sendStartDate;
    NSDate *m_reciveStartDate;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    BOOL m_bIsInDisconnect;
    BOOL m_bFirstBusinessPacket;
    BOOL m_bFirstPacketOKofBusiness;
    MMTimer *m_firstPacketTimer;
}

@property (weak, nonatomic) id<LocalAreaNetworkClientDelegate> delegate;
@property (retain, nonatomic) NSString *server_ip;
@property (nonatomic) unsigned short server_port;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)stopClient;
- (unsigned long long)sendData:(id)a0 andLength:(unsigned int)a1;
- (void)onRecv:(id)a0 port:(unsigned short)a1 data:(id)a2 length:(unsigned int)a3;
- (void)onDisconnect:(id)a0 port:(unsigned short)a1;
- (void)p_checkFirstPacket;
- (float)getClientRecvSpeed:(unsigned long long *)a0;
- (float)getClientSendSpeed:(unsigned long long *)a0;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalRecvLength;
- (unsigned long long)getClientOpenTime;
- (void).cxx_destruct;

@end
