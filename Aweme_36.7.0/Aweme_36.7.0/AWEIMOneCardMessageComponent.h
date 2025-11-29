@class AWEIMMessageConversation, NSString, NSTimer, AWEIMOneCardMessage;

@interface AWEIMOneCardMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMOneCardMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSTimer *timer;
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
- (void)p_cancelTimer;
- (void)cellEndDisplay:(unsigned long long)a0;
- (void)p_didEndDisplayingWithTimer:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;

@end
