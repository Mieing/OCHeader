@class NSString, UIScrollView, RichTextView, MMUIButton;

@interface WCFinderCollectionDescriptionHalfVC : MMUIHalfScreenViewController

@property (copy, nonatomic) NSString *descContent;
@property (nonatomic) double heightRatio;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) MMUIButton *closeBtn;

- (id)initWithDescription:(id)a0;
- (void)baseInit;
- (void)viewDidLoad;
- (double)halfScreenHeight;
- (double)getMaxHalfScreenHeight;
- (double)topViewHeight;
- (void)viewWillLayoutSubviews;
- (double)scrollViewHeight;
- (void)setupUI;
- (void)onCloseBtnClicked:(id)a0;
- (void).cxx_destruct;

@end
