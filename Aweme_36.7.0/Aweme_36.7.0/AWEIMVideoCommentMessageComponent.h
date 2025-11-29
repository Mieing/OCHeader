@class NSString, AWEIMMessageConversation, AWEIMVideoCommentMessage;

@interface AWEIMVideoCommentMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, AWEIMFeedVideoMsgUnavailableStatusUpdatesObserver>

@property (retain, nonatomic) AWEIMVideoCommentMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)didUpdateUnavailableStatusForMessage:(id)a0;
- (void)didUpdateContentTitleForMessage:(id)a0 itemID:(id)a1;
- (void)didEditContentTitleForMessage:(id)a0;
- (id)p_getDisplayNickname;
- (id)p_stringWithString:(id)a0 font:(id)a1 linkTapAction:(id /* block */)a2 commonTapAction:(id /* block */)a3;
- (id)textColorWithMessage:(id)a0;
- (id)highlightColorWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;
- (id)contentAttributedString;
- (void)tapAction;

@end
