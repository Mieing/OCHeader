@class NSString, OrientationSafePageSheetContainer;

@interface HintWithJumpWebViewHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, ILinkEventExt> {
    NSString *_title;
    NSString *_url;
    NSString *_confirmWording;
    NSString *_cancelWording;
    id /* block */ _urlClickCallabck;
    id /* block */ _confirmCallback;
    id /* block */ _cancelCallback;
    unsigned long long _supportedOrientationMask;
    OrientationSafePageSheetContainer *container;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 withBottomUrl:(id)a1 withConfirmCallback:(id /* block */)a2 withCancelCallback:(id /* block */)a3 withBottomUrlClickCallback:(id /* block */)a4 withConfirmWording:(id)a5 wtihCancelWording:(id)a6 withSupportedOrientationMask:(unsigned long long)a7;
- (id)pageSheetContainer;
- (void)viewDidLoad;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
