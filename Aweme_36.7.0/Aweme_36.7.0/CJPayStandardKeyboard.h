@class NSArray, NSTimer, CJPayButton, UIImpactFeedbackGenerator, CJPayStandardKeyboardConfigModel;

@interface CJPayStandardKeyboard : UIView

@property (retain, nonatomic) NSArray *btnConfigArr;
@property (retain, nonatomic) NSTimer *deleteLongPressTimer;
@property (retain, nonatomic) CJPayButton *confirmButton;
@property (retain, nonatomic) CJPayButton *deleteButton;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) CJPayStandardKeyboardConfigModel *configModel;
@property (copy, nonatomic) id /* block */ inputStrBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) unsigned long long localThemeType;

- (void)p_shakeFeedback;
- (void)layoutKeyboard;
- (void)cj_adapterForLocalTheme:(unsigned long long)a0;
- (void)setKeyboardLocalTheme:(unsigned long long)a0;
- (void)p_updateKeyBoardBtnSecureState;
- (id)p_keyboardContentWithType:(unsigned long long)a0;
- (id)p_createBtnConfigsByContentList:(id)a0;
- (void)p_resetKeyboardLayout;
- (id)p_createConfirmBtnConfig;
- (id)p_createDeleteBtnConfig;
- (id)p_createInputBtnConfigForContent:(long long)a0;
- (void)p_buttonClicked:(id)a0 withEvent:(id)a1;
- (BOOL)p_isTouchOutside:(id)a0 event:(id)a1;
- (void)p_completeInputAction;
- (void)p_deleteAction;
- (void)p_inputStrAction:(id)a0;
- (void)beginDeleteByLongPress;
- (void)endDeleteByLongPress;
- (id)p_createInputBtn:(long long)a0;
- (id)p_createConfirmBtn;
- (id)p_createDeleteBtn;
- (void)deleteLongPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)didMoveToWindow;

@end
