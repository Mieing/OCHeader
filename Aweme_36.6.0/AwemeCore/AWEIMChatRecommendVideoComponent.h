@class NSString, AWEIMChatRecommendVideoContext;

@interface AWEIMChatRecommendVideoComponent : AWEIMComponentBase <AWEIMChatRecommendVideoInterface, AWEIMComponentLazyCreate>

@property (weak, nonatomic) AWEIMChatRecommendVideoContext *chatRecommendVideoContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (BOOL)hasSentAwemeModelInThisLife:(id)a0;
- (void)showRecommendVideoVC;
- (void)didClickSendAwemeModel:(id)a0;
- (void).cxx_destruct;

@end
