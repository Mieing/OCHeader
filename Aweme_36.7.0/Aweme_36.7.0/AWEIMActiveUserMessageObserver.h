@interface AWEIMActiveUserMessageObserver : NSObject

+ (void)updateActiveInfoWithMessageInfo:(id)a0;
+ (BOOL)p_isAvailableWithMessage:(id)a0;
+ (void)p_updateActiveInfoIfNeededWithObserverInfos:(id)a0;
+ (id)p_denyUidDictionary;
+ (void)newMessagesWithMessageIdentifiers:(id)a0 belongingConversationMap:(id)a1;
+ (void)updateActiveInfoWithUid:(id)a0 secUid:(id)a1 timestamp:(double)a2;
+ (BOOL)isAvailable;

@end
