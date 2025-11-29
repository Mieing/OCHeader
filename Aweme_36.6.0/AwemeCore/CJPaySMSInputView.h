@class UIFont, NSArray, NSString, NSTimer, UIView, UITextField;
@protocol CJPaySMSInputViewDelegate;

@interface CJPaySMSInputView : UIView <UITextFieldDelegate, CJPayStandardLocalThemeAdapterProtocol>

@property (copy, nonatomic) NSArray *lineViews;
@property (copy, nonatomic) NSArray *cursorViews;
@property (copy, nonatomic) NSString *inputStr;
@property (nonatomic) double itemW;
@property (retain, nonatomic) UIView *responseClickView;
@property (retain, nonatomic) NSTimer *delayCallTimer;
@property (weak, nonatomic) id<CJPaySMSInputViewDelegate> smsInputDelegate;
@property (retain, nonatomic) UITextField *textField;
@property (nonatomic) double sep;
@property (nonatomic) long long inputFieldCount;
@property (nonatomic) BOOL isNeedDarkMode;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cj_adapterForLocalTheme:(unsigned long long)a0;
- (id)blinking;
- (void)p_buildLineViews;
- (void)inputContentChange:(id)a0;
- (void)p_updateComponentColorWithInputIndex:(unsigned long long)a0;
- (void)p_triggerDelayFinish:(id)a0;
- (id)p_lineViewColor;
- (id)p_lineViewHighlightColor;
- (void)p_sendFinishMsg:(id)a0;
- (id)p_cursorViewColor;
- (void)clearText;
- (void).cxx_destruct;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction;
- (id)getText;

@end
