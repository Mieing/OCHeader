@class NSString;

@interface ZUOAuthManager : NSObject

@property (copy, nonatomic) NSString *AK;
@property (nonatomic) BOOL ifIgnoreLoginCache;
@property (nonatomic) BOOL ifIgnoreOauthCache;
@property (nonatomic) BOOL isDebug;
@property (copy, nonatomic) NSString *ua;
@property (nonatomic) BOOL ifGM;

+ (id)getVersionInfo;
+ (void)oauthByModules:(id)a0 resultListener:(id /* block */)a1;
+ (void)load;
+ (id)getInstance;

- (void)clearCULoginCache;
- (void)clearCUOauthCache;
- (void)closeLoginCachingStrategy:(BOOL)a0;
- (void)closeOauthCachingStrategy:(BOOL)a0;
- (void)initWithApiKey:(id)a0 withUA:(id)a1;
- (void)initWithApiKey:(id)a0 withUA:(id)a1 ifGM:(BOOL)a2;
- (void)login:(double)a0 resultListener:(id /* block */)a1;
- (void)oauth:(double)a0 resultListener:(id /* block */)a1;
- (void)requestTimeout:(double)a0 type:(int)a1 resultListener:(id /* block */)a2;
- (void)uaid:(double)a0 resultListener:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setDebug:(BOOL)a0;
- (void)initWithApiKey:(id)a0;

@end
