@interface GTMOAuth2Compatibility : NSObject

+ (id)persistenceResponseStringForAuthSession:(id)a0;
+ (id)authSessionForPersistenceString:(id)a0 tokenURL:(id)a1 redirectURI:(id)a2 clientID:(id)a3 clientSecret:(id)a4 error:(id *)a5;

- (void).cxx_destruct;
- (id)init;

@end
