@class UIButton, NSString;
@protocol AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol;

@interface AFDStoryPlayInteractionSendMessageElement : AWEPlayInteractionBaseElement <AFDStoryPlayInteractionElementProtocol>

@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *sendMsgButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPlayInteractionCommentElementDOUYINLiteAdapterClass;

- (void)initializeElement;
- (id)aAWEPadModuleAdapter;
- (id)activateInfoWithData:(id)a0;
- (id)aAWEPlayInteractionCommentElementDOUYINLiteAdapter;
- (double)elementWidthWithAweme:(id)a0;
- (void)onSendMsgButtonClicked;
- (void)updateLayout;
- (void).cxx_destruct;
- (unsigned long long)elementType;
- (void)viewDidLoad;
- (id)context;
- (unsigned long long)elementPosition;
- (double)imageViewWidth;
- (void)playAnimation;

@end
