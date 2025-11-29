@class AFDPopoverViewModel, UIView;
@protocol AFDMomentContextService;

@interface AFDPopoverComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (nonatomic) BOOL hasShownPopover;
@property (retain, nonatomic) UIView *bubbleAnchor;
@property (retain, nonatomic) AFDPopoverViewModel *viewModel;

- (void)componentDidLoad;
- (void)p_showPopoverIfNeeded;
- (void).cxx_destruct;

@end
