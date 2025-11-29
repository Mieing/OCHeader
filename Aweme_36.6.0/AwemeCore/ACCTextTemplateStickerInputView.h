@class UIButton, UIView, UILabel, ACCCustomTextTemplateView;

@interface ACCTextTemplateStickerInputView : UIView

@property (retain, nonatomic) ACCCustomTextTemplateView *textView;
@property (retain, nonatomic) UIView *textInputBackgroundView;
@property (retain, nonatomic) UILabel *placeholder;
@property (retain, nonatomic) UIButton *confirm;
@property (retain, nonatomic) UIButton *cancel;

- (void)setupUI:(BOOL)a0;
- (id)initWithCancel;
- (void)configEmptyStatus:(BOOL)a0;
- (double)calculateTextBgHeight;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)attributes;
- (id)init;

@end
