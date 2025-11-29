@class MMTimer;
@protocol ChatMigrationHeartBeatMonitorDelegate;

@interface ChatMigrationHeartBeatMonitor : NSObject {
    unsigned long long nextAckID;
    MMTimer *m_heartBeatTimer;
    BOOL m_bMonitorEnable;
    BOOL m_bHeartBeatTransfer;
}

@property (weak, nonatomic) id<ChatMigrationHeartBeatMonitorDelegate> delegate;

- (id)init;
- (void)p_sendHeartBeatToRemote;
- (void)getHeartBeatPacketWithAckID:(unsigned long long)a0;
- (void)sendHeartBeatRequest;
- (void)checkHeartBeatResponse;
- (void)enableHeartBeatMonitor;
- (void)disableHeartBeatMonitor;
- (void)checkHeartBeat;
- (void).cxx_destruct;

@end
