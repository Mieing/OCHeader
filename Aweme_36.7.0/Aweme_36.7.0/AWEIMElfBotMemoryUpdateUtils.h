@interface AWEIMElfBotMemoryUpdateUtils : NSObject

+ (BOOL)canUseMemoryConversationShortID:(id)a0;
+ (void)requestAggregationInfoIfNeededWithConversationID:(id)a0 jsbParams:(id)a1 source:(unsigned long long)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)requestSecretKeyWithConvShortID:(id)a0 completion:(id /* block */)a1;
+ (void)deleteTopicIDWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)requestSignArchiveWithConversationID:(id)a0 content:(id)a1 completion:(id /* block */)a2;
+ (void)startWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)p_startWithContext:(id)a0 completion:(id /* block */)a1;
+ (BOOL)tryPullIfPossibleWithContext:(id)a0 completion:(id /* block */)a1;
+ (long long)pollingErrorCodeWithContext:(id)a0;
+ (double)pollingIntervalWithContext:(id)a0;
+ (void)processAggregationDeleteRecordWithResponseDic:(id)a0 dataModel:(id)a1;
+ (void)requestAggregationInfoIfNeededWithDataModel:(id)a0 jsbParams:(id)a1 source:(unsigned long long)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (id)aggregationSourceKeyWithSource:(unsigned long long)a0;
+ (void)processAggregationSecretKeyWithResponseDic:(id)a0 convShortID:(id)a1 keyExchange:(id)a2;
+ (void)processAggregationBasicInfoWithResponseDic:(id)a0 dataModel:(id)a1;
+ (void)processAggregationCharacterWithResponseDic:(id)a0 dataModel:(id)a1;
+ (void)aggregationParamsWithDataModel:(id)a0 jsbParams:(id)a1 source:(unsigned long long)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)setTimestamp:(long long)a0 scene:(id)a1 conversationShortID:(id)a2;
+ (id)secretKeyWithEncryptedSecretKey:(id)a0 sharedSecretKey:(id)a1 scene:(id)a2;
+ (long long)timestampWithConversationShortID:(id)a0 scene:(id)a1;
+ (id)keyWithConversationShortID:(id)a0 scene:(id)a1;

@end
