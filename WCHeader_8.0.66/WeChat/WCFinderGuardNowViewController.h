@class UIButton, PrepareFinder, UIScrollView, UILabel, UIView;

@interface WCFinderGuardNowViewController : MMUIViewController

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *summaryLabel;
@property (retain, nonatomic) UIView *descContainer;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) PrepareFinder *prepare;

+ (id)newWithPrepare:(id)a0;

- (id)init;
- (id)initWithPrepare:(id)a0;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)setupViews;
- (void)updateViews;
- (void)_updateSummary:(id)a0;
- (void)onClickConfirmButton;
- (void)startOpLog:(BOOL)a0;
- (void).cxx_destruct;

@end
