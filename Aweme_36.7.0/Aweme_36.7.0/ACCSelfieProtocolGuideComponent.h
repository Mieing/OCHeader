@class UIView, NSString, UIImageView, UIButton, UIControl, CAShapeLayer, UILabel, AWEIMGuideSelectionImageView;
@protocol ACCRecorderViewContainer, ACCSelfieGuideService;

@interface ACCSelfieProtocolGuideComponent : ACCFeatureComponent <AWEIMGuideSelectionImageViewDelegate>

@property (retain, nonatomic) UIView *grayBackView;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *xmojiImageView;
@property (retain, nonatomic) UILabel *topTitleLabel;
@property (retain, nonatomic) CAShapeLayer *backgroundTypeMaskLayer;
@property (retain, nonatomic) AWEIMGuideSelectionImageView *selectionCircleView;
@property (retain, nonatomic) UILabel *agreeTipsLabel;
@property (retain, nonatomic) UIButton *openPrivacyPageButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIControl *expandSelectControl;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCSelfieGuideService> guaideImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)didAgreeProtocolKey;
- (void)p_addView:(id)a0 withRoundedCorners:(unsigned long long)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2;
- (void)p_showAgreementViewWithAnimation;
- (void)p_openPrivacyPage:(id)a0;
- (void)p_cancelButtonClick:(id)a0;
- (void)p_confirmButtonClick:(id)a0;
- (void)expandControlTouched;
- (void)p_dismissAgreementViewWithAnimation:(id /* block */)a0;
- (void)selectionImageViewDidChangeSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
