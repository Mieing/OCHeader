@class NSDate, NSString, MCNearbyServiceBrowser, NSDictionary, MCPeerID, MCSession, WXGSpeedFilter, MMTimer;
@protocol LocalAreaPeerClientDelegate;

@interface LocalAreaPeerClient : NSObject <MCNearbyServiceBrowserDelegate, MCSessionDelegate> {
    MCNearbyServiceBrowser *m_browser;
    MCSession *m_clientSession;
    NSString *m_currentServiceType;
    NSDictionary *m_dicoverInfo;
    NSString *m_answerInfo;
    MCPeerID *m_localPeerID;
    MCPeerID *m_otherPeerID;
    BOOL m_bConnectOK;
    MMTimer *m_connectTimer;
    NSDate *m_peerOpenDate;
    unsigned long long m_totalReceiveLength;
    unsigned long long m_totalSendLength;
    unsigned long long m_lastTotalReceiveLength;
    unsigned long long m_lastTotalSendLength;
    WXGSpeedFilter *m_sendSpeedFilter;
    WXGSpeedFilter *m_receiveSpeedFilter;
    NSDate *m_sendStartDate;
    NSDate *m_receiveStartDate;
}

@property (weak, nonatomic) id<LocalAreaPeerClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)startClientWithDiscoverInfo:(id)a0 withAnswerInfo:(id)a1 withServiceType:(id)a2;
- (void)p_checkConnected;
- (void)stopClient;
- (unsigned long long)sendData:(id)a0 andLength:(unsigned int)a1;
- (BOOL)p_checkDiscoverInfo:(id)a0;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (void)browser:(id)a0 didNotStartBrowsingForPeers:(id)a1;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4;
- (void)session:(id)a0 didReceiveCertificate:(id)a1 fromPeer:(id)a2 certificateHandler:(id /* block */)a3;
- (float)getPeerReceiveSpeed:(unsigned long long *)a0;
- (float)getPeertSendSpeed:(unsigned long long *)a0;
- (unsigned long long)getTotalSendLength;
- (unsigned long long)getTotalReceiveLength;
- (unsigned long long)getClientOpenTime;
- (void).cxx_destruct;

@end
