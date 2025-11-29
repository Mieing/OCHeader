@class NSString, IESLiveChargeViewModel, UIView;
@protocol IESLiveWebViewService, IESHYContainerProtocol;

@interface IESLiveChargeViewConsumeDSComponent : UIView <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol, IESLiveChargeViewComponent>

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) double width;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)loadHybridContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pageInitialData;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithWidth:(double)a0;
- (id)pageURL;
- (void)setupUI;
- (double)viewHeight;

@end
