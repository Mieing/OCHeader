@class UIButton, NSString, UIImageView, UIView, AWEIMGlobalToastViewModel, YYLabel;

@interface AWEIMSecurityFloatView : UIView <AWEIMSecurityFullScreenViewControllerMessage, AWEIMRendererProtocol>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *headImagView;
@property (retain, nonatomic) YYLabel *contentLabel;
@property (retain, nonatomic) AWEIMGlobalToastViewModel *viewModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ didDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showOnView:(id)a0 viewModel:(id)a1 dismissBlock:(id /* block */)a2;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)onCloseButtonClick;
- (void)didDismissViewController:(id)a0;
- (void)__themeDidChange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
