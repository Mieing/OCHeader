@class NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol;

@interface AWEPlayletPanelRelativeAnnieXCardView : UIView <BDXContainerLifecycleProtocol>

@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *containerView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) double initTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
