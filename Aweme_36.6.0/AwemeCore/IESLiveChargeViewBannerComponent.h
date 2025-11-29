@class NSArray, IESLiveChargeViewModel, NSString, UIView;
@protocol IESLiveWebViewService, IESHYContainerProtocol;

@interface IESLiveChargeViewBannerComponent : UIView <IESLiveHybridContainerDelegate, IESLiveChargeViewComponent>

@property (nonatomic) double width;
@property (nonatomic) double lynxBannerHeight;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) BOOL loadLynxFailed;
@property (retain, nonatomic) NSArray *diamondExtraArray;
@property (nonatomic) BOOL requestExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)iesLiveHybridContainerDidFinishLoad:(id)a0;
- (void)iesLiveHybridContainer:(id)a0 loadFailWithError:(id)a1;
- (void)iesLiveHybridContainerDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didRechargeSuccess:(BOOL)a0 error:(id)a1;
- (double)getBannerHeightWithUrl:(id)a0;
- (void)updateBannerUI;
- (void)updateBannerHeight;
- (id)lynxBannerUrlString;
- (void)setupCustomBridgeMethod:(id)a0;
- (void)destroyLynxBannerAndUpdatePanelHeight;
- (id)loadHybridView;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithWidth:(double)a0;
- (void)setupUI;
- (double)viewHeight;

@end
