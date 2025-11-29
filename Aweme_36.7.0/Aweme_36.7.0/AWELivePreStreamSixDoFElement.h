@protocol IESLiveSixDoFStore;

@interface AWELivePreStreamSixDoFElement : AWELiveBusinessBaseElement

@property (retain, nonatomic) id<IESLiveSixDoFStore> sixDofViewModel;

- (void)viewController_viewDidAppear;
- (void)viewController_viewDidDisAppear;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (BOOL)p_enable;
- (void)preStreamVC_viewDidAppear;
- (void)preStreamVC_viewDidDisappear;
- (void)setupSixDof;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
