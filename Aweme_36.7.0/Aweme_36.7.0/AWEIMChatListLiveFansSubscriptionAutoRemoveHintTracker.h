@class NSString, NSMutableSet;

@interface AWEIMChatListLiveFansSubscriptionAutoRemoveHintTracker : NSObject <AWEIMChatListLiveFansSubscriptionAutoRemoveHintMessage>

@property (retain, nonatomic) NSMutableSet *showedSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__remindTypeForHint:(id)a0;
- (void)showHint:(id)a0 cid:(id)a1 params:(id)a2;
- (void)clickHint:(id)a0 cid:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;
- (void)dealloc;

@end
