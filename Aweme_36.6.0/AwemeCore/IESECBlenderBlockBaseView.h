@class NSString, IESECBlenderContext;
@protocol IESECBlenderViewModelProtocol;

@interface IESECBlenderBlockBaseView : IESECSliceXBaseContentElementView <IESECBlenderLifecycle, IESECBlenderSliceContexProtocol, IESECBlenderViewModelDelegate, IESECBlenderBlockContainerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESECBlenderContext *blenderContext;
@property (retain, nonatomic) id<IESECBlenderViewModelProtocol> viewModel;

- (void)configBlenderContext;
- (void)refreshUIWithOtherInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
