@class AWEUIAlertView, NSString;

@interface AWEGoodsDisclaimerTextViewDelegate : NSObject <UITextViewDelegate>

@property (weak, nonatomic) AWEUIAlertView *alertView;
@property (copy, nonatomic) NSString *webVCReactID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURLString:(id)a0;
- (void)bindToAWEUIAlertView:(id)a0;
- (void)webviewWillDisappear:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)init;
- (void)dealloc;

@end
