@class MMFinderLiveTaskId, UIView, MMFinderLiveConnectMicPkPanelMasterView, MMUIButton;
@protocol MMFinderLiveConnectMicPkPanelDelegate;

@interface MMFinderLiveConnectMicPkPanel : MMPageSheetBaseView

@property (retain, nonatomic) MMUIButton *navRightQuitPkButton;
@property (retain, nonatomic) MMUIButton *navRightFinishPkPrematurelyButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMFinderLiveConnectMicPkPanelMasterView *masterView;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelDelegate> delegate;

- (id)initWithTaskId:(id)a0;
- (long long)overrideUserInterfaceStyle;
- (void)initViews;
- (void)layoutSubviews;
- (void)initPageSheetConfig;
- (id)makeCloseButton;
- (void)closeAction;
- (void)quitPkAction;
- (void)finishPkPrematurelyAction;
- (void)updateWithModel:(id)a0 animated:(BOOL)a1;
- (unsigned long long)navRightButtonType;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)checkAndUpdateAfterMicConditionChanged;
- (id)liveTask;
- (void).cxx_destruct;

@end
