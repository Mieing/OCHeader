@interface IESIMCombineShareUtils : NSObject

+ (id)getCombineShareContentMessage:(id)a0;
+ (id)getStoreKeyContentSecMessageId:(id)a0 combineShareMsgId:(id)a1;
+ (id)getStoreKeyContentSecMessageId:(id)a0 conversationId:(id)a1;
+ (id)getCombineShareContentMessageRefreshTime:(id)a0;
+ (void)setCombineShareContentMessage:(id)a0 uniqueId:(id)a1;
+ (void)setCombineShareMessagePreloadTime:(id)a0 uniqueId:(id)a1;
+ (id)getCombineShareMessagePreloadTime:(id)a0;
+ (void)setCombineShareContentMessageRefreshTime:(id)a0 uniqueId:(id)a1;
+ (void)storePreloadTime:(id)a0 forCombineShareMessage:(id)a1;
+ (id)getPreloadTimeForCombineShareMessage:(id)a0;

@end
