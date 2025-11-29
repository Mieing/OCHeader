@class WARedEnvelopesReceiveHomeView, MMUIViewController, NSData, NSString;
@protocol WARedEnvelopesOpenLogicDelegate;

@interface WARedEnvelopesOpenLogic : MMObject <PBMessageObserverDelegate, WCRedEnvelopesReceiveHomeViewDelegate>

@property (weak, nonatomic) MMUIViewController *containerVC;
@property (retain, nonatomic) WARedEnvelopesReceiveHomeView *introView;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *sendID;
@property (weak, nonatomic) id<WARedEnvelopesOpenLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithcontainerVC:(id)a0 appID:(id)a1 sendID:(id)a2;
- (void)startOpen;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void).cxx_destruct;

@end
