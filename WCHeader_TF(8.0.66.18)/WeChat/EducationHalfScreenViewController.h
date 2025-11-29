@class NSString, OrientationSafePageSheetContainer;

@interface EducationHalfScreenViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate> {
    NSString *_title;
    NSString *_hint;
    BOOL _isFirstTime;
    BOOL _isLandscape;
    id /* block */ _confirmCallback;
    unsigned long long _supportedOrientationMask;
    OrientationSafePageSheetContainer *container;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 withHint:(id)a1 withIsLandscape:(BOOL)a2 withIsFirstTime:(BOOL)a3 withConfirmCallback:(id /* block */)a4 withSupportedOrientationMask:(unsigned long long)a5;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)pageSheetContainer;
- (void)viewDidLoad;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;

@end
