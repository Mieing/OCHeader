@class CECPopoverViewModel, UIView;
@protocol AFDMomentContextService;

@interface CECPopoverComponent : AFDMomentCameraBaseComponent

@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (nonatomic) BOOL hasShownPopover;
@property (retain, nonatomic) UIView *bubbleAnchor;
@property (retain, nonatomic) CECPopoverViewModel *viewModel;

- (void)componentDidLoad;
- (void)p_showPopoverIfNeeded;
- (void).cxx_destruct;

@end
