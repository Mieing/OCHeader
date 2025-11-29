@class AWEIMUserLabelTopGreetingMessage, AWEIMMessageConversation, NSString;

@interface AWEIMUserLabelTopGreetingMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMUserLabelTopGreetingMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)__setupTagModels;
- (id)__buildTagModel;
- (void)transferToProfileWithAdditionalParams:(id)a0;
- (void)p_refreshProps;
- (void)onClickProfileButton;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;
- (void)avatarTapped:(id)a0;

@end
