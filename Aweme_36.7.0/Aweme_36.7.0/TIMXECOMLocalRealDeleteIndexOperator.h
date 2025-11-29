@class TIMXSDKInstance;

@interface TIMXECOMLocalRealDeleteIndexOperator : NSObject {
    TIMXSDKInstance *_r;
}

+ (long long)localRealDeleteIndexForConversation:(id)a0 rootObject:(id)a1;
+ (BOOL)setLocalRealDeleteIndex:(long long)a0 forConversation:(id)a1 rootObject:(id)a2;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
