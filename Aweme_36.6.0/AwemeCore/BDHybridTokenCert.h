@class NSString, NSDictionary, BDHybridAPIContext, BDHybridPageContext;

@interface BDHybridTokenCert : NSObject <BDPrivacyCertProtocol>

@property (retain, nonatomic) BDHybridPageContext *pageContext;
@property (retain, nonatomic) BDHybridAPIContext *apiContext;
@property (copy, nonatomic) NSDictionary *businessCustomInfo;
@property (copy, nonatomic) NSString *uniqueToken;
@property (copy, nonatomic) NSString *authInfoKey;
@property (readonly, nonatomic) id /* block */ token;
@property (readonly, copy, nonatomic) id /* block */ auth;
@property (readonly, nonatomic) id /* block */ updatePage;
@property (readonly, nonatomic) id /* block */ updateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithBridgeContext:(id)a0;
+ (id)instanceWithToken:(id)a0 page:(id)a1 api:(id)a2;
+ (id)create;

- (id)certToken;
- (id)certParams;
- (id)validateWithContext:(id)a0;
- (void)attachCustomInfo:(id)a0;
- (id)authKey;
- (void)prepareValidateWithContext:(id)a0;
- (void).cxx_destruct;
- (id)customInfo;
- (id)certType;

@end
