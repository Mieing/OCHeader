@class NSString;

@interface IESIMLoadingService : HTSService <IESIMLoadingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showLoadingOnView:(id)a0;
- (id)showWindowLoadingWithTitle:(id)a0 animated:(BOOL)a1;
- (id)showWindowLoading;
- (id)createLoadingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dismissWindowLoadingView;
- (id)particleLoadingProtocolViewWithStyle:(long long)a0;
- (void)showLoadingParticleViewWithView:(id)a0;
- (void)hideLoadingParticleViewWithView:(id)a0;
- (id)showWindowLoadingWithTitle:(id)a0;
- (id)showWindowLoadingWithTitle:(id)a0 animated:(BOOL)a1 afterDelay:(double)a2;
- (id)showLoadingOnView:(id)a0 title:(id)a1 animated:(BOOL)a2;
- (void)dismissWindowTextLoadingView;
- (void)dismissWindowTextLoadingViewWithAnimated:(BOOL)a0;
- (id)createLoadingView;
- (id)standardLoadingViewWithStyle:(unsigned long long)a0 text:(id)a1;
- (unsigned long long)p_duxLoadingToastStyleWithIESIMStyle:(unsigned long long)a0;
- (long long)p_duxLoadingParticleStyleWithIESIMStyle:(long long)a0;

@end
