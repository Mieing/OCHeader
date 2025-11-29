@class AWEIMPlayletMessage, AWEIMMessageConversation, NSString;

@interface AWEIMSharePlayletVideoContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMPlayletMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_addKVO;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)p_tryUpdateUnavailableState;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)tapAction:(id)a0;

@end
