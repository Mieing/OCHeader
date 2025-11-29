@class NSString, WCSearchTextView;
@protocol WCSearchTextViewDelegate;

@interface WCSearchTextViewForwardDelegate : NSObject <MMGrowTextViewDelegate>

@property (weak, nonatomic) WCSearchTextView *wcSearchTextView;
@property (weak, nonatomic) id<WCSearchTextViewDelegate> textViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)MMGrowTextViewBeginEditing:(id)a0;
- (void)MMGrowTextViewEndEditing:(id)a0;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)keyboardWillShow:(double)a0;
- (void)keyboardDidShow:(double)a0;
- (void)keyboardWillHide:(BOOL)a0;
- (void)onClickTextViewSendText:(id)a0;
- (void)TextViewDidEnter:(id)a0;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)TextViewDidChangeSelection:(id)a0;
- (void)TextViewExceedMaxLength:(id)a0;
- (BOOL)shouldRespondToKeyBoardEvent;
- (void)setKeyboardAnimationDuration:(double)a0;
- (void)setKeyboardAnimationCurve:(long long)a0;
- (void).cxx_destruct;

@end
