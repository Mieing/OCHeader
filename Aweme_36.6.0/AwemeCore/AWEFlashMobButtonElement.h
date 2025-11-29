@class NSString, AWEFlashMobButtonViewModel, UIView, UIButton;

@interface AWEFlashMobButtonElement : AWEPlayInteractionBaseActionButtonElement <AWEPlayInteractionBottomButtonPriorityProtocol>

@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL clicked;
@property (nonatomic) BOOL shouldDelayShowButton;
@property (nonatomic) long long avoidPriority;
@property (retain, nonatomic) AWEFlashMobButtonViewModel *btnViewModel;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL needReverse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeElement;
- (void)viewController_didEndDisplaying;
- (void)viewController_viewWillDisappear;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)onAwemeDiggNotification:(id)a0;
- (id)quickFlashStickerModel;
- (BOOL)shouldActivateButtonWithData:(id)a0;
- (void)configBtnViewModel;
- (void)routeShootPage:(id)a0;
- (id)joinBtnTitle;
- (void)showJoinQuickFlashButton;
- (BOOL)shouldShowQuickFlashButton;
- (BOOL)shouldJumpToFlashbackWithStickerModel:(id)a0;
- (BOOL)shouldShowFlashMobButton;
- (void).cxx_destruct;
- (void)reset;
- (void)layoutSubviews;
- (void)viewDidLoad;

@end
