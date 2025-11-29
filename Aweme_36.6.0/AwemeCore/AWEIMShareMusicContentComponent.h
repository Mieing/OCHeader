@class NSString, AWEIMMessageConversation, AWEIMShareMusicMessage;

@interface AWEIMShareMusicContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMShareMusicMessage *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (void)fetchQuotedMessageCover:(id)a0 context:(id)a1 completion:(id /* block */)a2;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (void)handleTapAction:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)tapAction:(id)a0;

@end
