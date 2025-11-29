@class UIView, NSString, UITextView, NSDictionary, UIButton, DUXButton, UILabel, AWEOPRealNameINCIdentifyCell;

@interface AWEOPRealNameINCIdentifyViewController : UIViewController <UITextViewDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITextView *protocolView;
@property (retain, nonatomic) AWEOPRealNameINCIdentifyCell *cell;
@property (retain, nonatomic) DUXButton *allowButton;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL showProtocol;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeClick;
- (void)allowClick;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)viewDidLoad;
- (void)dismiss:(BOOL)a0;
- (void)setupUI;

@end
