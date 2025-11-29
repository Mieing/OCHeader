@class NSString, PAGView, RichTextView, UIButton;

@interface WCFinderHalfScreenPrivateLikeViewController : MMUIHalfScreenViewController

@property (retain, nonatomic) RichTextView *titleTextView;
@property (retain, nonatomic) RichTextView *subtitleTextView;
@property (retain, nonatomic) PAGView *animationView;
@property (retain, nonatomic) UIButton *okButton;
@property (retain, nonatomic) NSString *mtitle;
@property (retain, nonatomic) NSString *subtitle;

- (id)init;
- (void)initDataSource;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupAnimationView;
- (void)traitCollectionDidChange:(id)a0;
- (void)layoutContentView;
- (void)clickOKButton;
- (double)calHalfScreenHeight;
- (void).cxx_destruct;

@end
