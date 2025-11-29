@class NSString, UIView;
@protocol IESHYContainerProtocol, IESLiveGroupLiveComponentViewDataProvider;

@interface IESLiveGroupLiveComponentView : UIView <IESHYHybridViewLifecycleProtocol>

@property (weak, nonatomic) id<IESLiveGroupLiveComponentViewDataProvider> dataProvider;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) NSString *containerPayload;
@property (copy, nonatomic) id /* block */ sizeChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)setupHybridContainer;
- (id)queryURLWithString;
- (id)buildGroupLiveView:(id)a0 contextParams:(id)a1;
- (void)updateHybridContainer;
- (id)updateContextParams;
- (void)updateLynxWithContainerPayload:(id)a0;
- (void)loadLynxWithDataProvider:(id)a0 containerPayload:(id)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
