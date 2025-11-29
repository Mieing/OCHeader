@class AWEECOMIMTextView, AWEECOMIMInputSpeechTextLoadingView, UIImageView, UIImage, UILabel, NSString;

@interface AWEECOMIMInputSpeechTextView : UIView <UITextViewDelegate>

@property (retain, nonatomic) UIImageView *bkgView;
@property (retain, nonatomic) AWEECOMIMTextView *textView;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) AWEECOMIMInputSpeechTextLoadingView *textLoadingView;
@property (retain, nonatomic) UIImage *warningBkgImage;
@property (copy, nonatomic) NSString *resultStr;
@property (nonatomic) double asrUpdateTime;
@property (copy, nonatomic) id /* block */ keyboardWillHideBlock;
@property (copy, nonatomic) id /* block */ keyboardWillShowBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addKeyboardObserve;
- (void)removeKeyboardObserve;
- (void)updateSpeechTextViewWithIsWarning:(BOOL)a0 isFinish:(BOOL)a1 startTime:(double)a2;
- (id)textViewCurrentText;
- (void)updateAnimationViewWithResultStr:(id)a0 isFinalResult:(BOOL)a1;
- (id)textViewSendText;
- (void)updateAnimationViewLoadingView;
- (void)speechTextViewResignFirstResponder;
- (void)speechTextViewRemoveAllText;
- (id)desLabelStrWithIsWarning:(BOOL)a0 isFinish:(BOOL)a1 startTime:(double)a2;
- (void)updateAnimationViewWithResultStr:(id)a0 isFinalResult:(BOOL)a1 isAsrUpdate:(BOOL)a2;
- (id)getImageFromView:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
