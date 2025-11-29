@class IESGCPXPlayGamePaymentManager, NSString, NSDate;

@interface IESGCPCGPaymentComponent : IESGCPCGInstanceBaseComponent <IESGCPCGMessageChannelActions>

@property (retain, nonatomic) NSDate *lastReceivePaymentMessageTime;
@property (retain, nonatomic) IESGCPXPlayGamePaymentManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)didReceiveOSDKChannelMessage:(id)a0;
- (void)_didReceivePaymentRequestWithOutOrderId:(id)a0;
- (void)_sendPayEndMessage:(id)a0 withOurOrderId:(id)a1;
- (void)_createNewPaymentManager;
- (void).cxx_destruct;
- (id)init;

@end
