@class NSMutableArray, CJPaySafeInputViewStyleModel, CAShapeLayer;
@protocol CJPaySafeInputViewDelegate;

@interface CJPaySafeInputView : CJPayBaseSafeInputView

@property (nonatomic) double singleItemWidth;
@property (retain, nonatomic) CAShapeLayer *cursorLayer;
@property (nonatomic) BOOL needDelay;
@property (nonatomic) BOOL isDenoise;
@property (retain, nonatomic) CJPaySafeInputViewStyleModel *styleModel;
@property (retain, nonatomic) NSMutableArray *boxViewArray;
@property (retain, nonatomic) NSMutableArray *dotsViewArray;
@property (retain, nonatomic) NSMutableArray *linesViewArray;
@property (retain, nonatomic) NSMutableArray *cursorViews;
@property (weak, nonatomic) id<CJPaySafeInputViewDelegate> safeInputDelegate;
@property (nonatomic) BOOL mineSecureTextEntry;
@property (nonatomic) BOOL showCursor;
@property (nonatomic) BOOL mineSecureSupportShortShow;
@property (nonatomic) BOOL hasInputHistory;

- (void)p_layoutUI;
- (void)deleteBackWord;
- (void)inputNumber:(long long)a0;
- (void)shakeFeedbackWhenError;
- (id)initWithKeyboard:(BOOL)a0;
- (id)initWithKeyboardForDenoise:(BOOL)a0 denoiseStyle:(long long)a1;
- (id)initWithKeyboardForDenoise:(BOOL)a0;
- (void)p_setupUIForDenoise;
- (id)initWithInputViewStyleModel:(id)a0;
- (void)setDotsVisible:(long long)a0;
- (void)setCursorViewVisible:(long long)a0;
- (void)delayRefresh;
- (void)setDotsViewAllHidden;
- (id)blinking;
- (void)setCursorViewsAllHidden;
- (void)p_setupUIForResetPwdStyle;
- (void)p_setupUI;
- (id)accessibilityLabel;
- (void)clearInput;
- (id)closestPositionToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (BOOL)hasText;
- (id)accessibilityHint;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)setContentText:(id)a0;

@end
