@interface AWEIMShareToSingleChatHelper : NSObject

+ (BOOL)saveUidWithShareContext:(id)a0 uid:(id)a1;
+ (id)eventHandlerWithShareContext:(id)a0;
+ (id)contentProviderWithShareContext:(id)a0;
+ (id)uidWithShareContext:(id)a0;
+ (Class)contentProviderWithShareTargetType:(unsigned long long)a0;
+ (Class)eventProviderWithShareTargetType:(unsigned long long)a0;
+ (void)uidWithShareContext:(id)a0 completion:(id /* block */)a1;
+ (void)conversationIDWithShareContext:(id)a0 completion:(id /* block */)a1;

@end
