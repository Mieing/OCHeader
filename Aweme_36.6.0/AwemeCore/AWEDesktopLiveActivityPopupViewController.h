@class NSString, DUXContentSheet, AWEDesktopLiveActivityPopupViewModel, AWEDesktopSystemPopupGuideView;

@interface AWEDesktopLiveActivityPopupViewController : UIViewController <AWEDesktopSystemPopupGuideViewActionDelegate, DUXSheetDelegate>

@property (retain, nonatomic) AWEDesktopSystemPopupGuideView *guideView;
@property (retain, nonatomic) AWEDesktopLiveActivityPopupViewModel *viewModel;
@property (weak, nonatomic) DUXContentSheet *basicSheet;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (id)initWithGuideViewModel:(id)a0;
- (void)setupGuideView;
- (void)setupGuideViewBottomImage;
- (void)desktopSystemPopupGuideView:(id)a0 leftButtonClick:(id)a1;
- (void)desktopSystemPopupGuideView:(id)a0 rightButtonClick:(id)a1;
- (void)desktopSystemPopupGuideView:(id)a0 closeButtonClick:(id)a1;
- (void).cxx_destruct;

@end
