@class DUXActionPopover, NSString, AFDUserListMoreActionContext, AFDMoreActionButtonViewModel;

@interface AFDMoreActionButton : UIButton <AWEPadUIAdaptionViewTransitionObserver>

@property (retain, nonatomic) AFDMoreActionButtonViewModel *viewModel;
@property (weak, nonatomic) DUXActionPopover *popover;
@property (retain, nonatomic) AFDUserListMoreActionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onButtonClicked;
- (void)showPopoverWithTargetView:(id)a0 actions:(id)a1;
- (void)handleDeviceOrientationDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateWithUser:(id)a0;

@end
