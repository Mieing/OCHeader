@class NSArray, NSDictionary, BDPrivacyEmbedPoint, NSString;

@interface BDPrivacyCert : NSObject <BDPrivacyCertProtocol>

@property (copy, nonatomic) NSDictionary *cacheParams;
@property (copy, nonatomic) NSDictionary *businessCustomInfo;
@property (copy, nonatomic) NSArray *dataPrivacys;
@property (retain, nonatomic) BDPrivacyEmbedPoint *scene;
@property (copy, nonatomic) NSString *usage;
@property (readonly, copy, nonatomic) id /* block */ updateUsage;
@property (readonly, copy, nonatomic) id /* block */ updateSceneId;
@property (readonly, copy, nonatomic) id /* block */ updateTag;
@property (readonly, copy, nonatomic) id /* block */ updatePrivacyPolicys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create;

- (id)certToken;
- (id)certParams;
- (id)validateWithContext:(id)a0;
- (void)attachCustomInfo:(id)a0;
- (id)authKey;
- (id)initWithPrivacys:(id)a0 scene:(id)a1 usage:(id)a2;
- (void).cxx_destruct;
- (id)customInfo;
- (id)initWithDict:(id)a0;
- (id)certType;

@end
