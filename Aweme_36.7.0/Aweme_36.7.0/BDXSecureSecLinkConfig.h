@class NSString, BDWebSecureLinkCustomSetting, NSArray;

@interface BDXSecureSecLinkConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) BDWebSecureLinkCustomSetting *customSetting;
@property (nonatomic) BOOL switchOnFirstRequestSecureCheck;
@property (nonatomic) unsigned long long secureLinkCheckRedirectType;
@property (copy, nonatomic) NSString *secureLinkBaseUrl;
@property (nonatomic) BOOL strictMode;
@property (copy, nonatomic) NSArray *allowedHosts;
@property (nonatomic) BOOL enableSeclink;
@property (copy, nonatomic) id /* block */ willInterceptFirstJump;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)BDXSecureSecLinkConfig:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end
