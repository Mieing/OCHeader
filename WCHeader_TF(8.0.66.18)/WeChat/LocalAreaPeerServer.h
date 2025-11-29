@class MCSession, NSString, NSDictionary, MCNearbyServiceAdvertiser, NSDate, WXGSpeedFilter, MCPeerID;
@protocol LocalAreaPeerServerDelegate;

@interface LocalAreaPeerServer : NSObject <MCNearbyServiceAdvertiserDelegate, MCSessionDelegate> {
    MCNearbyServiceAdvertiser *m_advertiser;
    MCSession *m_serverSession;
    NSDictionary *m_dicoverInfo;
    NSString *m_answerInfo;
    MCPeerID *m_localPeerID;
    MCPeerID *m_otherPeerID;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReciveLength;
    unsigned long long m_lastTotalSendLength;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_recveSpeedFilter;
    NSDate *m_peerOpenDate;
}

@property (weak, nonatomic) id<LocalAreaPeerServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onSwitchContext;
- (void)startServerWithDiscoverInfo:(id)a0 withAnswerInfo:(id)a1 withServiceType:(id)a2;
- (void)stopServer;
- (unsigned long long)sendData:(id)a0 andLength:(unsigned int)a1;
- (void)advertiser:(id)a0 didReceiveInvitationFromPeer:(id)a1 withContext:(id)a2 invitationHandler:(id /* block */)a3;
- (void)advertiser:(id)a0 didNotStartAdvertisingPeer:(id)a1;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)session:(id)a0 didReceiveCertificate:(id)a1 fromPeer:(id)a2 certificateHandler:(id /* block */)a3;
- (float)getPeerSendSpeed:(unsigned long long *)a0;
- (float)getPeerReceiveSpeed:(unsigned long long *)a0;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getPeerOpenTime;
- (void).cxx_destruct;

@end
