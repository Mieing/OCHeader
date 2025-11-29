@class NSString, AWEUGPushGuideViewModel;

@interface AWEUGPushGuideBaseView : UIView <AWEUGPushGuideViewProtocol>

@property (retain, nonatomic) AWEUGPushGuideViewModel *viewModel;
@property (nonatomic) double showDelayTime;
@property (nonatomic) double beginLoadingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGuideViewModel:(id)a0;
- (void)realShow;
- (void)loadNetworkResourceWithCompletion:(id /* block */)a0;
- (BOOL)canShowOnCurrentTopVC;
- (void).cxx_destruct;
- (void)show;

@end
