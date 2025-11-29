@class UIButton, UIView;
@protocol ACCEditEffectPanelServiceProtocol, ACCTextStickerServiceProtocol, ACCGenericEffectPanelTrackerService;

@interface ACCGenericEffectPanelNavComponent : ACCSecondaryPageComponent

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *saveBtn;
@property (copy, nonatomic) id /* block */ exitWhenCancelCompletion;
@property (copy, nonatomic) id /* block */ exitWhenSaveCompletion;
@property (weak, nonatomic) id<ACCEditEffectPanelServiceProtocol> panelService;
@property (weak, nonatomic) id<ACCGenericEffectPanelTrackerService> trackerService;
@property (weak, nonatomic) id<ACCTextStickerServiceProtocol> textStickerService;

- (void)componentDidMount;
- (void)didClickCancel:(id)a0;
- (void)didClickSave:(id)a0;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)bindServices;
- (BOOL)hasChangeEffect;
- (void).cxx_destruct;
- (void)setupUI;

@end
