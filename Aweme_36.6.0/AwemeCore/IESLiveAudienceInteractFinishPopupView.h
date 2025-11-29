@class UIButton, NSString, IESLiveInteractFeedbackViewModel, IESLiveInteractFeedbackView, UILabel, RACCompoundDisposable;

@interface IESLiveAudienceInteractFinishPopupView : HTSLivePopUpView

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *subTitleString;
@property (copy, nonatomic) NSString *confirmString;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) IESLiveInteractFeedbackViewModel *feedbackViewModel;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) UILabel *closeTitleLabel;
@property (retain, nonatomic) UIButton *feedbackOpenButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) IESLiveInteractFeedbackView *feedbackView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (nonatomic) unsigned long long viewStyle;
@property (nonatomic) BOOL justFeedbackEnabled;

- (void)didSetAttachingDIContext;
- (void)didTapConfirmButton:(id)a0;
- (void)hideWithDestroy:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 feedbackViewModel:(id)a3 confirmBlock:(id /* block */)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 feedbackViewModel:(id)a3 viewStyle:(unsigned long long)a4 confirmBlock:(id /* block */)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 feedbackViewModel:(id)a3 viewStyle:(unsigned long long)a4 confirmBlock:(id /* block */)a5 dismissBlock:(id /* block */)a6;
- (void)layoutModeUIWithShowAnimation:(BOOL)a0;
- (void)setupJustFeedbackMode;
- (void)p_updateHeight:(float)a0 showAnimation:(BOOL)a1;
- (void)didTapFeedbackButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 subTitle:(id)a2 feedbackViewModel:(id)a3;
- (void)setConfirmTitle:(id)a0 confirmBlock:(id /* block */)a1;
- (void)updateAnchorMuteRemindText:(id)a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)setup;
- (void)didTapCancelButton;
- (void)layoutUI;

@end
