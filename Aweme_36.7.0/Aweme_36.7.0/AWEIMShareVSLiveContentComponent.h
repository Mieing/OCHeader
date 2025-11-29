@class AWEIMShareVSLiveMessage, AWEIMMessageConversation, NSString;

@interface AWEIMShareVSLiveContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMShareVSLiveMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (id)p_defaultPostImageForMe;
+ (id)p_defaultPostImageForOther;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)liveCoverTapped:(id)a0;
- (void)cardAvatarTapped:(id)a0;
- (BOOL)p_isFansGroup;
- (void)tapLiveCardAction;
- (void)transferToLive;
- (void)p_liveShowTracker;
- (void).cxx_destruct;
- (id)displayMessage;

@end
