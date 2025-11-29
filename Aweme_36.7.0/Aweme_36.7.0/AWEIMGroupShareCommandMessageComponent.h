@class AWEIMMessageConversation, NSString, AWEIMGroupShareCommandMessage, AWEIMShareDataModel;

@interface AWEIMGroupShareCommandMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMGroupShareCommandMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSString *pasteDescription;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *groupOwnerID;
@property (nonatomic) double expireTime;
@property (nonatomic) long long fetchStatus;
@property (retain, nonatomic) AWEIMShareDataModel *shareData;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_fetchData;
- (void)trackEventWithShowToken;
- (void)p_prepareAndShare;
- (void)__showSharePanel;
- (void)p_closeButtonTapped;
- (void)p_shareButtonTapped;
- (void)p_retryButtonTapped;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (id)p_listVC;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)displayMessage;

@end
