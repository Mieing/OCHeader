@class NSDate, NSString, LocalAreaPeerClient, LocalAreaNetworkClient, NSData, MMTimer, NSMutableString;
@protocol LocalAreaCommunicationClientDelegate;

@interface WXGLocalAreaCommunicationClient : NSObject <LocalAreaNetworkClientDelegate, LocalAreaPeerClientDelegate, CNetworkStatusExt> {
    LocalAreaPeerClient *m_peerClient;
    LocalAreaNetworkClient *m_networkClient;
    unsigned long long m_transferType;
    NSData *m_firstPacketData;
    MMTimer *m_cutConnectionTimer;
    MMTimer *m_transferSpeedTimer;
    NSMutableString *m_connectInfoString;
    NSDate *m_timeTryToCut;
    double m_slowCutInterval;
    float m_slowGapSpeed;
    BOOL m_detectReach;
}

@property (weak, nonatomic) id<LocalAreaCommunicationClientDelegate> delegate;
@property (retain, nonatomic) NSString *server_ip;
@property (nonatomic) unsigned short server_port;
@property (retain, nonatomic) NSString *server_id;
@property (retain, nonatomic) NSString *server_hello;
@property (retain, nonatomic) NSString *server_ok;
@property (nonatomic) BOOL tryPeer;
@property (retain, nonatomic) NSString *wifiName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithServerIP:(id)a0 serverPort:(unsigned short)a1 serverID:(id)a2 serverHello:(id)a3 serverOk:(id)a4;
- (void)p_resetNetworkClient;
- (void)p_resetPeerClient;
- (void)checkTransferSpeed;
- (void)p_initiativeToTerminateClient;
- (unsigned long long)clientSendData:(id)a0 andLength:(unsigned int)a1;
- (void)clientDisconnect;
- (void)p_stopNetworkClient;
- (void)p_stopPeerClient;
- (BOOL)isPeerTransferData;
- (BOOL)canHaveMultipeer;
- (void)chooseNetworkChannel;
- (void)choosePeerChannel;
- (void)onNetworkReciveData:(id)a0 andLength:(unsigned int)a1;
- (void)onNetworkDisconnect;
- (void)onNetworkConnectFail;
- (void)onPeerReceiveData:(id)a0;
- (void)onPeerDisconnect;
- (void)onPeerConnectFailed;
- (void)onPeerConnected;
- (float)getClientReceiveSpeed:(unsigned long long *)a0;
- (float)getClientSendSpeed:(unsigned long long *)a0;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getClientOpenTime;
- (void)ReachabilityChange:(unsigned int)a0;
- (id)getDebugInfo;
- (void).cxx_destruct;

@end
