@class NSMutableArray;

@interface IESLiveRevenueInteractConnectionMonitor : NSObject

@property (nonatomic) long long connectionIndex;
@property (retain, nonatomic) NSMutableArray *startConnectArray;

- (id)initWithDIContext:(id)a0;
- (void)interactiveMediaService:(id)a0 firstFrameRenderCallback:(id)a1;
- (unsigned long long)startConnectionWithReplyMessage:(id)a0 fromStatus:(long long)a1 didSwitchChannel:(BOOL)a2;
- (unsigned long long)startConnectionWithPermitMessage:(id)a0;
- (unsigned long long)startConnectionWithReplyResponse:(id)a0 startTime:(double)a1 role:(unsigned long long)a2;
- (unsigned long long)startConnectionWithPermitResponse:(id)a0 startTime:(double)a1 fromUserLinkmicID:(id)a2;
- (void)clearConnectArray;
- (void)addConnectModelWithRole:(unsigned long long)a0 waitFrameArray:(id)a1 startTime:(double)a2;
- (void)checkConnectSuccessWithLinkMicID:(id)a0;
- (id)connectRoleToString:(unsigned long long)a0;
- (void)monitorConnectionStart:(id)a0;
- (void)checkConnectSuccess;
- (void)monitorConnectionSuccess:(id)a0;
- (void)monitorConnectionWithEvent:(id)a0 extraParams:(id)a1;
- (void)monitorEvent:(id)a0 withConnectModel:(id)a1 extraParams:(id)a2;
- (id)currentRenderUsers;
- (void).cxx_destruct;
- (id)provider;

@end
