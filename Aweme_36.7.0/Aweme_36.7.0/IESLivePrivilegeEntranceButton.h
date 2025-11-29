@class IESLiveRichTextLabel, NSString, IESLivePrivilegeEntranceButtonViewModel, IESLiveAnimatedImageView, UIView;

@interface IESLivePrivilegeEntranceButton : UIView <IESLivePrivilegeEntranceViewProtocol>

@property (nonatomic) BOOL isShowingBubble;
@property (nonatomic) BOOL isShowingAwardTip;
@property (nonatomic) BOOL isTogglingDynamicInfo;
@property (weak, nonatomic) UIView *tipView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) IESLiveRichTextLabel *defaultTextLabel;
@property (retain, nonatomic) IESLiveAnimatedImageView *scanAnimatedImageView;
@property (retain, nonatomic) IESLivePrivilegeEntranceButtonViewModel *viewModel;
@property (copy, nonatomic) id /* block */ sizeDidUpdated;
@property (copy, nonatomic) id /* block */ tipWillShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1 diContext:(id)a2;
- (void)dismissPrompt;
- (void)p_updateButtonWith:(id)a0;
- (void)viewDidShowWithLabel:(id)a0;
- (void)p_showTipViewAnimation:(id)a0 tips:(id)a1 completion:(id /* block */)a2;
- (void)tapTip:(id)a0;
- (void)p_setDetailButtonWithPrivilegeModel:(id)a0;
- (void)p_jumpoutPromptWith:(id)a0 displayText:(id)a1;
- (void)p_setTitleWithRichTextPieces:(id)a0 dynamicInfo:(id)a1 lightInfo:(id)a2;
- (void)p_setTitleWithRichTextPieces:(id)a0 awardTipsRichTextPieces:(id)a1 lightInfo:(id)a2;
- (void)startScanAnimationWithDuration:(long long)a0 count:(long long)a1;
- (void)playScanWithImage:(id)a0;
- (void)changeTitleWithPieces:(id)a0 completion:(id /* block */)a1;
- (void)p_jumpoutPromptWith:(id)a0 textPieces:(id)a1 tips:(id)a2 completion:(id /* block */)a3;
- (void)p_jumpoutPromptWithAttributedString:(id)a0 completion:(id /* block */)a1;
- (BOOL)p_isHonorBuffModel:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)setupData;
- (void)didTapButton;

@end
