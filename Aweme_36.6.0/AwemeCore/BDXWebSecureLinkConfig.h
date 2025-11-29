@class NSString, BDWebSecureLinkCustomSetting, NSArray;

@interface BDXWebSecureLinkConfig : NSObject

@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) BDWebSecureLinkCustomSetting *customSetting;
@property (nonatomic) BOOL switchOnFirstRequestSecureCheck;
@property (nonatomic) unsigned long long secureLinkCheckRedirectType;
@property (copy, nonatomic) NSString *secureLinkBaseUrl;
@property (nonatomic) BOOL strictMode;
@property (copy, nonatomic) NSArray *allowedHosts;
@property (copy, nonatomic) id /* block */ willInterceptFirstJump;

+ (id)configWithLanguage:(id)a0 switchOnFirstRequestSecureCheck:(BOOL)a1 secureLinkCheckRedirectType:(unsigned long long)a2;

- (void).cxx_destruct;

@end
