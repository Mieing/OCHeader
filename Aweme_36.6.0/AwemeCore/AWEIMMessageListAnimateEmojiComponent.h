@class NSString;

@interface AWEIMMessageListAnimateEmojiComponent : AWEIMComponentBase <AWEIMMessageListAnimateEmojiInterface>

@property (nonatomic) long long firstScreenMinMsgPullIndex;
@property (nonatomic) long long readIndexWhenEnterChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)hostVC_viewDidAppearAndRender;
- (void)hostVC_afterFirstRender;
- (void)p_viewDidAppear;
- (long long)getFirstScreenMinMsgPullIndex;
- (long long)getReadIndexWhenEnterChat;
- (void)p_loadEmojiAnimationIfNeed;
- (void)updateAnimateEmojiListIfNeed;
- (id)p_resolveLittleEmojiConfig;

@end
