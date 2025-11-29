@class ChatBotHorizontalPageView, MMUILabel, MMUIButton;

@interface ChatBotSnapLinksViewController : MMUIViewController

@property (retain, nonatomic) MMUIButton *backBtn;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *emptyLabel;
@property (retain, nonatomic) ChatBotHorizontalPageView *horizontalPageView;

- (void)viewDidLoad;
- (void)layoutBackBtn;
- (void)layoutTitleLabel;
- (void)layoutEmptyLabel;
- (void)setupContentView;
- (void)viewWillAppear:(BOOL)a0;
- (void)close;
- (void).cxx_destruct;

@end
