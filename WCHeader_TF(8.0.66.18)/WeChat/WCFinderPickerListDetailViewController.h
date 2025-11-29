@class UIScrollView, RichTextView, WCFinderHeadImageView, WCFinderFeedContentVM, UIView, MMUIButton, UILabel;

@interface WCFinderPickerListDetailViewController : MMUIHalfScreenViewController

@property (retain, nonatomic) UIView *contentContainderView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) MMUIButton *customCloseBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCFinderHeadImageView *headView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UIScrollView *contentScrollView;
@property (retain, nonatomic) RichTextView *contentTextView;

- (id)initWithContentVM:(id)a0;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)setupSubView;
- (id)topView;
- (id)closeButton;
- (void)onClose;
- (void).cxx_destruct;

@end
