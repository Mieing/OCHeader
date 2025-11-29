@class UIView, MMWebImageView, MMUITextField, UITapGestureRecognizer, UIViewPropertyAnimator, UIImageView, TextStateIcon, NSString, MMUILabel, MMUIButton, UIImpactFeedbackGenerator;
@protocol TextStatePublishCustomIconViewDelegate;

@interface TextStatePublishCustomIconView : UIView <MMUITextFieldDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) MMUIButton *switchIconButton;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUITextField *descriptionTextField;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *textBackgroundView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (retain, nonatomic) MMUIButton *doneButton;
@property (retain, nonatomic) UIView *verticalSeparator;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (nonatomic) double expandHeight;
@property (retain, nonatomic) UIViewPropertyAnimator *switchIconButtonAnimator;
@property (retain, nonatomic) TextStateIcon *autoReplacedIcon;
@property (retain, nonatomic) TextStateIcon *selectedIcon;
@property (weak, nonatomic) id<TextStatePublishCustomIconViewDelegate> delegate;
@property (nonatomic) BOOL enableSwitchIcon;
@property (nonatomic) BOOL enableAutoReplaceIcon;
@property (nonatomic) BOOL enableSwitchIconButtonShowBreathAnim;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)standardHeight;
+ (id)generateActionButton;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initGestures;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)initState;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)expandToHeight:(double)a0 alongsideAnimation:(id /* block */)a1;
- (BOOL)shrinkToStandardHeightWithCompletion:(id /* block */)a0;
- (BOOL)isAnimatorRunning;
- (void)resetToStandard;
- (void)animateExpand;
- (void)startBreatchAnimForSwitchIconButton;
- (void)hideTips;
- (void)setSelectedIcon:(id)a0 animated:(BOOL)a1;
- (void)setSwitchButtonSelected:(BOOL)a0;
- (void)setSwitchButtonSelected:(BOOL)a0 animDuration:(double)a1;
- (void)updateIcon;
- (id)icon;
- (id)customIconDescription;
- (void)handleTapGesture:(id)a0;
- (void)onEndEditDescription;
- (void)onTapSwitchIconButton;
- (void)onTapCancelButton;
- (void)onTapDoneButton;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)mmTextFieldDidChange:(id)a0;
- (void)mmTextFieldDidExceedMaxLen:(id)a0;
- (void)checkInputRecommend;
- (void)requsetInputRecommendData;
- (void).cxx_destruct;

@end
