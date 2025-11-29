@class LocalAreaPeerServer, NSString, MMTimer, LocalAreaNetworkServer;
@protocol LocalAreaCommunicationServerDelegate;

@interface WXGLocalAreaCommunicationServer : NSObject <LocalAreaPeerServerDelegate, LocalAreaNetworkServerDelegate> {
    LocalAreaPeerServer *m_peerServer;
    LocalAreaNetworkServer *m_networkServer;
    unsigned long long m_transferType;
    MMTimer *m_transferSpeedTimer;
    MMTimer *m_cutConnectionTimer;
    BOOL m_isTestSpeedOpen;
    double m_slowCutInterval;
    float m_slowGapSpeed;
    BOOL m_peerDisconnect;
    BOOL m_networkDisconnect;
}

@property (weak, nonatomic) id<LocalAreaCommunicationServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onSwitchContext;
- (void)startNetworkServer:(id *)a0 port:(unsigned short *)a1;
- (void)checkTransferSpeed;
- (void)initiativeToTerminateServer;
- (void)startPeerServerWithServerID:(id)a0 serverHello:(id)a1 serverOK:(id)a2;
- (void)stopServer;
- (void)p_stopNetworkServer;
- (void)p_stopPeerServer;
- (unsigned long long)serverSendData:(id)a0 andLength:(unsigned int)a1;
- (void)markTestSpeedIsOpen;
- (void)markTestSpeedIsClose;
- (void)choosePeerChannel;
- (void)chooseNetworkChannel;
- (unsigned long long)sendNetworkTestSpeedPacketResponse;
- (unsigned long long)sendPeerTestSpeedPacketResponse;
- (void)onNetworkReciveData:(id)a0 andLength:(unsigned int)a1;
- (void)onNetworkConnected;
- (void)onNetworkDisconnect;
- (void)onPeerReceiveData:(id)a0;
- (void)onPeerConnected;
- (void)onPeerDisconnect;
- (float)getServerSendSpeed:(unsigned long long *)a0;
- (float)getServerReceiveSpeed:(unsigned long long *)a0;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getServerOpenTime;
- (void).cxx_destruct;

@end
