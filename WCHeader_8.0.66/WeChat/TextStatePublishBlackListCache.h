@interface TextStatePublishBlackListCache : NSObject

+ (void)setItem:(id)a0 forType:(long long)a1;
+ (void)removeItemForType:(long long)a0 textStateId:(id)a1;
+ (id)getItemForType:(long long)a0 textStateId:(id)a1;
+ (id)keyForType:(long long)a0 textStateId:(id)a1;

@end
