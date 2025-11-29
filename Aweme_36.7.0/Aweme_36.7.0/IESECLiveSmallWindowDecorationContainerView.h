@class NSString, IESECLiveSmallWindowViewModel, IESECLiveSmallWindowInformationView;

@interface IESECLiveSmallWindowDecorationContainerView : UIView <IESECSmallWindowDecorationViewProtocol, IESLiveOnePipBizDecorationViewProtocol>

@property (retain, nonatomic) IESECLiveSmallWindowViewModel *viewModel;
@property (retain, nonatomic) IESECLiveSmallWindowInformationView *bottomInformationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didShowSmallWindow;
- (void)didHideSmallWindow;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)initUI;

@end
