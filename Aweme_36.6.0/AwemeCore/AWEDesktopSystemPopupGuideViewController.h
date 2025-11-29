@class AWEDesktopSystemPopupGuideView, AWEDesktopSystemPopupGuideViewModel, NSString, DUXContentSheet, AWEDesktopSystemPopupGuidePIP;

@interface AWEDesktopSystemPopupGuideViewController : UIViewController <AWEDesktopSystemPopupGuideViewActionDelegate, DUXSheetDelegate>

@property (retain, nonatomic) AWEDesktopSystemPopupGuideView *guideView;
@property (retain, nonatomic) AWEDesktopSystemPopupGuideViewModel *viewModel;
@property (retain, nonatomic) AWEDesktopSystemPopupGuidePIP *guidePIP;
@property (weak, nonatomic) DUXContentSheet *basicSheet;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sheetDidClickMaskArea:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (void)onAppDidBecomeActive;
- (void)onAppWillResignActive;
- (id)initWithGuideViewModel:(id)a0;
- (void)setupGuideView;
- (void)desktopSystemPopupGuideView:(id)a0 leftButtonClick:(id)a1;
- (void)desktopSystemPopupGuideView:(id)a0 rightButtonClick:(id)a1;
- (void)desktopSystemPopupGuideView:(id)a0 closeButtonClick:(id)a1;
- (void)desktopSystemPopupGuideView:(id)a0 desktopButtonClick:(id)a1;
- (void)setupGuideViewTopImage;
- (void)setupGuideViewMediumImage;
- (void)setupGuideViewVideo;
- (void).cxx_destruct;

@end
