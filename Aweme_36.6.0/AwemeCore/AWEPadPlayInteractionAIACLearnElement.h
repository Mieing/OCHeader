@class DUXPopover, NSString, AWEPadPlayInteractionAIViewModel, UIView, UIButton;
@protocol AWEFeedVideoButtonProtocol;

@interface AWEPadPlayInteractionAIACLearnElement : AWEPlayInteractionRightElement <AWERightElementButtonLayout, AWEPadPlayInteractionAIElementProtocol, DUXPopoverDelegate>

@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol> *button;
@property (retain, nonatomic) AWEPadPlayInteractionAIViewModel *viewModel;
@property (retain, nonatomic) DUXPopover *currentPopover;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL needResumeInViewAppear;
@property (nonatomic) BOOL shouldResume;
@property (nonatomic) double sendContentTimestamp;

+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEPadBizUIAdapterClass;
+ (id)activateInfoWithModel:(id)a0 context:(id)a1;
+ (unsigned long long)supportType;
+ (id)videoTypeEnableArray;
+ (id)padAISearchIconExp;

- (void)popoverDidDisappear:(id)a0;
- (void)viewController_didDisplay;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewDidAppear;
- (void)setAppear:(BOOL)a0;
- (void)onPlayer:(id)a0 didSingleClick:(id)a1;
- (void)viewDidChangeBreakPoint;
- (id)activateInfoWithData:(id)a0;
- (void)didClickButton;
- (id)popoverWithContent:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2;
- (id)aAWEPadBizUIAdapter;
- (void)trackEvent:(id)a0 extraParams:(id)a1;
- (void)onEntrySettingsChanged:(id)a0;
- (void)dismissPopoverIfNeeded;
- (void)showPauseSearchPopoverIfNeeded;
- (id)pauseSearchKeyWord;
- (void)trackEventForAIAskGuide:(id)a0;
- (id)popoverForPauseSearchWithText:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2;
- (void)showPopover:(id)a0;
- (unsigned long long)pauseMentionShowDuration;
- (id)pauseSearchConfig;
- (BOOL)onlyIconLayout;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (id)context;

@end
