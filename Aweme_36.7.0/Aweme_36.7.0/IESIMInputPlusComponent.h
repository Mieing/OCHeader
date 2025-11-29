@class NSString, AWEIMChatPanelViewModel, UIView, AWEIMInputVCUnhighlightedBadgeButton;
@protocol AWEIMPlusPanelViewProtocol;

@interface IESIMInputPlusComponent : AWEIMComponentBase <IESIMInputStateChangedActionProtocol, IESIMInputPlusComponentInterface, AWEIMChatPanelViewDelegate, IESIMInputStateChangedActionProtocol, IESIMInputThemeChangedAction, IESIMInputLayoutAction>

@property (retain, nonatomic) AWEIMInputVCUnhighlightedBadgeButton *plusBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<AWEIMPlusPanelViewProtocol> *chatPanelView;
@property (retain, nonatomic) AWEIMChatPanelViewModel *chatPanelViewModel;
@property (nonatomic) BOOL panelUseLocalConfigOnly;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)refreshChatPanelViewModelWithFullDetailUser:(id)a0;
- (void)updatePlatformChatPanels:(id)a0;
- (void)postOpenPlusPanelEvent;
- (void)companyCompontentTrackEvent:(id)a0 WithConversation:(id)a1;
- (void)plusBtnClicked:(id)a0;
- (BOOL)__isPanelFunction:(id)a0;
- (void)p_addChatPanelViewIfNeeded;
- (void)updateComponentFromState:(long long)a0 toState:(long long)a1;
- (void)inputThemeChangedWithThemeStyle:(long long)a0;
- (void)refreshBackgroundWithBackGroundImage:(BOOL)a0;
- (void)triggerLayoutAfterPanelChangeWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)triggerLayoutWhenTransitionWithNeedResize:(BOOL)a0 size:(struct CGSize { double x0; double x1; })a1;
- (BOOL)shouldShowPlusButton;
- (void)changePlusState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })chatPanelViewFrame;
- (void)p_rotatePlusButton:(id)a0;
- (long long)p_updateCurrentInputType;
- (id)plusButton;
- (void).cxx_destruct;

@end
