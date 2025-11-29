@class NSString, NSDictionary;

@interface AWEOpenPlatformAuthFlowModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSDictionary *localScopes;
@property (copy, nonatomic) NSString *redirectURI;
@property (copy, nonatomic) NSDictionary *identityScope;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *QRToken;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *templateIDs;
@property (nonatomic) BOOL notSkipConfirm;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *appIdentity;
@property (nonatomic) unsigned long long apiVersion;
@property (copy, nonatomic) NSString *customSceneAuthWhen;
@property (copy, nonatomic) NSString *openExtraStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
