@class NSString;
@protocol IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol;

@interface IESECPDPAutoSliceActionTrigger : NSObject <IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (weak, nonatomic) id<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didSwitchTo:(long long)a1;
- (void)initializeWithContainer:(id)a0;
- (void).cxx_destruct;

@end
