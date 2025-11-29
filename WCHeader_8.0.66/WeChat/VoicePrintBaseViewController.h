@class VoicePrintLoadingView, WCSheetView, UIScreenEdgePanGestureRecognizer, NSString, VoicePrintRecordButton, UIButton, VoicePrintDigitView, MMUILabel, MMUIButton, VoicePrintHeaderView;

@interface VoicePrintBaseViewController : MMUIViewController <VoicePrintRecordButtonDelegate>

@property (retain, nonatomic) WCSheetView *sheetView;
@property (retain, nonatomic) VoicePrintHeaderView *headerView;
@property (retain, nonatomic) VoicePrintLoadingView *loadingView;
@property (retain, nonatomic) VoicePrintDigitView *digitView;
@property (retain, nonatomic) MMUILabel *errorLabel;
@property (retain, nonatomic) VoicePrintRecordButton *recordButton;
@property (retain, nonatomic) UIButton *footerWeakButton;
@property (retain, nonatomic) MMUIButton *footerLinkButton;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (BOOL)shouldInteractiveDismiss;
- (void)initView;
- (void)initNavigationBar;
- (void)onClose;
- (void)onVoiceRecordButtonTouchDown:(id)a0;
- (void)onVoiceRecordButtonTouchUp:(id)a0;
- (void).cxx_destruct;

@end
