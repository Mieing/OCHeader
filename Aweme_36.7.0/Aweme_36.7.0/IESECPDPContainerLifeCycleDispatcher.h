@class NSString, NSMutableArray;
@protocol IESECGoodsDetailHostInjectable, IESECGoodsDetailPageProtocol, IESECGoodsDetailContainerProtocol;

@interface IESECPDPContainerLifeCycleDispatcher : NSObject <IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (retain, nonatomic) NSMutableArray *receivers;
@property (weak, nonatomic) id<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> container;
@property (weak, nonatomic) id<IESECGoodsDetailPageProtocol> page;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addReceivers:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;
- (void)addReceiver:(id)a0;
- (void)removeReceiver:(id)a0;

@end
