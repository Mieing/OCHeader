@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLivePetRabbitAnimationLynxContainer : UIView <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)openSchema:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
