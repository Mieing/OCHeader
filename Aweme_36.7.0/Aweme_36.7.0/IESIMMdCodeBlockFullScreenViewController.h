@class UITextView, UIFont, NSString, UIScrollView, IESIMMdCodeBlockFullScreenViewContext;

@interface IESIMMdCodeBlockFullScreenViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) IESIMMdCodeBlockFullScreenViewContext *context;
@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) UITextView *lineNumberView;
@property (retain, nonatomic) UIScrollView *scrollContainer;
@property (retain, nonatomic) UIFont *textFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)makeConstraints;
- (void)p_clickCopy;
- (void)p_clickBack;
- (void)updateLineNumbers;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateText:(id)a0;
- (void)calculateContentSize;

@end
