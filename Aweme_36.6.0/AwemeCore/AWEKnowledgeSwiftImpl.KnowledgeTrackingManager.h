@interface AWEKnowledgeSwiftImpl.KnowledgeTrackingManager : NSObject <AWEKnowledgeTrackingManagerProtocol>

+ (id)customizedTrackingParamsWithReferString:(id)a0 model:(id)a1;
+ (id)customizedTrackingParamsWithReferString:(id)a0 model:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (id)customizedTrackingParamsWithReferString:(id)a0 model:(id)a1 scene:(unsigned long long)a2 logExtra:(id)a3;
+ (id)customizedTrackingParamsWithReferString:(id)a0 model:(id)a1 scene:(unsigned long long)a2;
+ (void)compareParamsWithPassthroughParams:(id)a0 knowledgeParams:(id)a1 eventName:(id)a2 passthroughChain:(id)a3;

- (id)init;

@end
