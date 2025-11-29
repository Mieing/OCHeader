@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESGCPIdenticalPlayLynxView : UIView <IESHYHybridViewLifecycleProtocol, IESGCPCGLayerItemViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
