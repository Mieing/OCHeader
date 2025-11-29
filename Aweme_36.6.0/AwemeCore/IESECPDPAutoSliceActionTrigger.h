@class NSString;
@protocol IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol;

@interface IESECPDPAutoSliceActionTrigger : NSObject <IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (weak, nonatomic) id<IESECGoodsDetailHostInjectable, IESECGoodsDetailContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
