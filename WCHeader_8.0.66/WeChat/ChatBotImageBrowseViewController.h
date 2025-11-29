@class ChatBotImageBrowseView, UILabel, MMUIButton, ChatBotSnapLinksCellData;

@interface ChatBotImageBrowseViewController : MMUIViewController

@property (retain, nonatomic) MMUIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) ChatBotImageBrowseView *imageBrowseView;
@property (retain, nonatomic) ChatBotSnapLinksCellData *data;

- (id)initWithChatBotAllMemoryListInfo:(id)a0;
- (void)viewDidLoad;
- (void)close;
- (void)viewWillAppear:(BOOL)a0;
- (id)formatTimestampToDateString:(double)a0;
- (void).cxx_destruct;

@end
