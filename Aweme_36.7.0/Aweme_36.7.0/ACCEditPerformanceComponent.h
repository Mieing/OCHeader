@class NSString;
@protocol ACCEditViewContainer;

@interface ACCEditPerformanceComponent : ACCFeatureComponent <ACCPanelViewDelegate, ACCCreativePathMessage>

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (nonatomic) BOOL isViewFirstAppare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)panelViewController:(id)a0 willShowPanelView:(id)a1;
- (void)panelViewController:(id)a0 didDismissPanelView:(id)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (void)componentDidReceiveMemoryWarning:(unsigned long long)a0;
- (void)creativePathPageDidAppear:(unsigned long long)a0;
- (void)executeMemoryPredictionWithPage:(unsigned long long)a0;
- (id)panelNameFromPanelView:(id)a0;
- (void).cxx_destruct;

@end
