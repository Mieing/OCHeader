@interface ALMOwnPlayerApiParser : NSObject

+ (id)MD5HashString:(id)a0;
+ (id)signFromVideoID:(id)a0 ts:(long long)a1;
+ (void)setUserKey:(id)a0 secretKey:(id)a1;
+ (void)setApiPrefix:(id)a0;
+ (void)setCommonParamBlock:(id /* block */)a0;
+ (void)setDomainConfigBlock:(id /* block */)a0;
+ (void)setDomainResponseConfigBlock:(id /* block */)a0;
+ (id)urlWithVideoId:(id)a0;
+ (id /* block */)domainResponseConfigBlock;

@end
