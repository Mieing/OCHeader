@class AWEIMMessage, NSString, AWEIMTextTriggerAnimationInfo, AWEIMInterEmojiMatcherController;
@protocol AWEIMMessageTextTriggerSpecialEffectProtocol;

@interface AWEIMTextTriggerMatcher : NSObject <AWEIMTextTriggerMatcherProtocol>

@property (weak, nonatomic) AWEIMInterEmojiMatcherController *parent;
@property (retain, nonatomic) AWEIMTextTriggerAnimationInfo *matchedAnimation;
@property (retain, nonatomic) AWEIMMessage<AWEIMMessageTextTriggerSpecialEffectProtocol> *triggerMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMatcherEnable;
- (BOOL)tryMatch;
- (id)p_filterCharactor:(id)a0;
- (id)p_filterUselessWords:(id)a0;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;

@end
