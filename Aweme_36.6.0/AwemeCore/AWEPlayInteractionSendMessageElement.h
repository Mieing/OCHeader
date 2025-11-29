@class UIButton, NSString;
@protocol AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol;

@interface AWEPlayInteractionSendMessageElement : AWEPlayInteractionRightElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIButton<AWEFeedVideoButtonProtocol, AWEAwemeFeedVideoButtonProtocol, AFDFeedVideoButtonProtocol> *sendMsgButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (id)activateInfoWithContext:(id)a0;
+ (Class)aAWEPlayInteractionCommentElementDOUYINLiteAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (id)aAWEPlayInteractionCommentElementDOUYINLiteAdapter;
- (void)onSendMsgButtonClicked;
- (void)adaptePadElementSizeWithConfig:(struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })a0;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)context;

@end
