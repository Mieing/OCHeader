@class NSString, NSDictionary;

@interface IESLLPrivacyCertBean : NSObject <BDPrivacyCertProtocol, BDPrivacyCertProtocol, IESLLPrivacyCertProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *businessCustomInfo;
@property (copy, nonatomic) NSString *authInfoKey;
@property (retain, nonatomic) id pageContext;
@property (retain, nonatomic) id apiContext;
@property (copy, nonatomic) NSString *uniqueToken;
@property (readonly, copy, nonatomic) id /* block */ token;
@property (readonly, copy, nonatomic) id /* block */ auth;
@property (readonly, nonatomic) id /* block */ updatePage;
@property (readonly, nonatomic) id /* block */ updateAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithToken:(id)a0;
+ (id)create;

- (id)certToken;
- (id)certParams;
- (id)validateWithContext:(id)a0;
- (void)attachCustomInfo:(id)a0;
- (id)authKey;
- (void).cxx_destruct;
- (id)customInfo;
- (id)certType;

@end
