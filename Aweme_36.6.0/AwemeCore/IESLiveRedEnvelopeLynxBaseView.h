@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveRedEnvelopeLynxBaseView : UIView <IESHYHybridViewLifecycleProtocol>

@property (copy, nonatomic) NSString *clsName;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)onTapped;
- (void)buildLynxContainerWithUrl:(id)a0 params:(id)a1 clsName:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
