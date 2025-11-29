@class UIButton, UITextView, NSString;

@interface WCUpdateTestViewController : MMUIViewController <UITextViewDelegate>

@property (retain, nonatomic) UITextView *interpretTextView;
@property (retain, nonatomic) UIButton *convertButton;
@property (retain, nonatomic) UIButton *resetButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findSymbol:(id)a0;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupBaseView;
- (void)convertCrashReport;
- (void)resetInterpreter;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void).cxx_destruct;

@end
