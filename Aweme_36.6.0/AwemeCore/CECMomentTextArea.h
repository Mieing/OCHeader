@class UITextView, NSArray, CECMomentTextAreaSizeLimit, NSString, CECMomentTextAreaStringLengthLimit, UILabel;
@protocol CECMomentTextAreaDelegate;

@interface CECMomentTextArea : NSObject <UITextViewDelegate>

@property (retain, nonatomic) CECMomentTextAreaSizeLimit *sizeLimit;
@property (retain, nonatomic) NSArray *sizeLimitConstraints;
@property (retain, nonatomic) CECMomentTextAreaStringLengthLimit *limit;
@property (readonly, nonatomic) UITextView *textView;
@property (readonly, nonatomic) UILabel *placeholderLabel;
@property (weak, nonatomic) id<CECMomentTextAreaDelegate> delegate;
@property (copy, nonatomic) id /* block */ textToLimit;
@property (copy, nonatomic) id /* block */ textChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTextView:(id)a0;
- (id)initWithSizeLimit:(id)a0;
- (void)clearText;
- (void).cxx_destruct;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
