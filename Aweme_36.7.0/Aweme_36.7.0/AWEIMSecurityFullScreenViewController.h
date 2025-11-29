@class NSString, AWEIMSecurityFullScreenCardView, AWEIMGlobalToastViewModel, AWEIMSecurityGlobalToastConfigResponse;

@interface AWEIMSecurityFullScreenViewController : UIViewController <AWEIMSecurityFullScreenViewDelegate, AWEIMRendererProtocol>

@property (retain, nonatomic) AWEIMSecurityFullScreenCardView *cardView;
@property (retain, nonatomic) AWEIMSecurityGlobalToastConfigResponse *model;
@property (retain, nonatomic) AWEIMGlobalToastViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)fullScreenRemindView:(id)a0 didClickButtonWithModel:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
