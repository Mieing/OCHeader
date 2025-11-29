@class NSMapTable;

@interface AWEIMMessageConversationCacheManager : NSObject

@property (retain, nonatomic) NSMapTable *conversationCache;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)cacheConversationContext:(id)a0;
- (id)getConversationContextWithCid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
