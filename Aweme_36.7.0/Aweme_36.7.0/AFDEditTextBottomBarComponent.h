@class ACCAnimatedButton, DUXPopover, AWEFriendsCameraEditStory25BottomView, UIView, AFDEditBottomBarButton, AFDEditTextBottomBarViewModel;
@protocol AFDSocialTextStickerService, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCStickerServiceProtocol;

@interface AFDEditTextBottomBarComponent : ACCFeatureComponent

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (weak, nonatomic) id<AFDSocialTextStickerService> textStickerService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AFDEditTextBottomBarViewModel *viewModel;
@property (retain, nonatomic) AFDEditBottomBarButton *locationButton;
@property (retain, nonatomic) UIView *locationCheckMark;
@property (retain, nonatomic) AFDEditBottomBarButton *privacyButton;
@property (retain, nonatomic) ACCAnimatedButton *publishButton;
@property (retain, nonatomic) AWEFriendsCameraEditStory25BottomView *story25BottomView;
@property (nonatomic) BOOL popupViewTipShowing;
@property (retain, nonatomic) DUXPopover *popover;

- (void)componentDidAppear;
- (void)barItemContainerDidLoad;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindViewModel;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)showStoryPublishButtonPopoverIfNeeded;
- (void)sendStoryButtonPopoverTrack;
- (void)updatePublishButtonAndShareButton:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
