@class BaseReq, NSString;

@interface WeChatIdentityHandler : NSObject

@property (retain, nonatomic) BaseReq *contextReq;
@property (copy, nonatomic) NSString *contextID;
@property (nonatomic) BOOL universalLinkCheckEnable;
@property (copy, nonatomic) id /* block */ checkCompletion;

+ (void)registerAppID:(id)a0 universalLink:(id)a1;
+ (id)registerAppID;
+ (id)registerUniversalLink;
+ (id)loadTokenFromKeychain;
+ (id)genWeChatUniversalLinkWithExtraUrl:(id)a0 token:(id)a1 contextId:(id)a2 paramsDataStr:(id)a3 unnecessaryDataErased:(BOOL)a4;
+ (id)genWeChatUrlSchemeUrl:(id)a0 appendBundleID:(BOOL)a1 isDegrade:(BOOL)a2 paramsDataStr:(id)a3 unnecessaryDataErased:(BOOL)a4;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)shareInstance;
+ (id)keychainQuery;

- (void)setContextReq:(id)a0 contextId:(id)a1;
- (id)contextRequest;
- (BOOL)checkContextID:(id)a0;
- (BOOL)checkAndRecordTokenToKeychain:(id)a0 contextID:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)clearContext;

@end
