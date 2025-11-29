@class NSString, NSArray, ACCTextErrorPopover, CALayer, NSObject;
@protocol OS_dispatch_source, ACCTextViewDelegate;

@interface ACCEditPageTextView : UITextView <UITextViewDelegate, UIGestureRecognizerDelegate>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } currChangedRange;
@property (retain, nonatomic) NSString *currReplacementText;
@property (nonatomic) long long lastMarkedRangeOffset;
@property (nonatomic) BOOL isProcessingDelete;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *typingTimer;
@property (copy, nonatomic) NSArray *matches;
@property (retain, nonatomic) ACCTextErrorPopover *currentTextErrorPopover;
@property (retain, nonatomic) CALayer *textErrorLayer;
@property (weak, nonatomic) id<ACCTextViewDelegate> acc_delegate;
@property (retain, nonatomic) NSString *textStickerId;
@property (nonatomic) BOOL forCoverText;
@property (copy, nonatomic) NSString *creationID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTypingTimer;
- (BOOL)showTextErrorPopoverIfNeedWithTextView:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)checkCurrentTextErrorWithTextView:(id)a0;
- (BOOL)hasVisibleTexts;
- (void)updateTextErrorLayer;
- (void).cxx_destruct;
- (void)buildMenuWithBuilder:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textView:(id)a0 shouldInteractWithTextAttachment:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setup;
- (void)textViewDidBeginEditing:(id)a0;
- (BOOL)textViewShouldBeginEditing:(id)a0;
- (BOOL)textViewShouldEndEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)tapGesture:(id)a0;

@end
