@class NSString, NSMutableDictionary, AWEIMComponentManager;

@interface AWEIMMessageListSendStickerComponent : AWEIMComponentBase <AWEIMMessageListSendStickerInterface, AWEIMComponentLazyCreate, AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) NSMutableDictionary *providerMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)sendEmoticon:(id)a0 belongToTheme:(id)a1 statsContext:(id)a2;
- (id)createContextWithEmoticon:(id)a0 belongToTheme:(id)a1;
- (void)p_sendEmoticon:(id)a0 belongToTheme:(id)a1 statsContext:(id)a2;
- (BOOL)p_trySendLightInteractionWithContext:(id)a0;
- (void)p_trackGeneralEmojiClickWithContext:(id)a0;
- (void)sendEmoticonWithContext:(id)a0;
- (void).cxx_destruct;

@end
