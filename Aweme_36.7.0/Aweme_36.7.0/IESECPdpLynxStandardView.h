@class IESECPdpStdLynxElement, NSString, UIView;
@protocol IESHYContainerProtocol, IESECPdpStdLynxElementDelegate;

@interface IESECPdpLynxStandardView : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *content;
@property (retain, nonatomic) IESECPdpStdLynxElement *element;
@property (weak, nonatomic) id<IESECPdpStdLynxElementDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidConstructJSRuntime:(id)a0;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidCreated:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
