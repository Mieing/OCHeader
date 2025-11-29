@class NSString, UIView;
@protocol IESHYContainerProtocol, IESLiveGroupLiveComponentViewDataProvider;

@interface IESLiveGroupLiveComponentFoldView : UIView <IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) id<IESLiveGroupLiveComponentViewDataProvider> dataProvider;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupHybridContainer;
- (id)buildGroupLiveView:(id)a0 contextParams:(id)a1;
- (void)updateLynx;
- (void)loadLynxWithDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
