@class NSArray;

@interface ArgusSecureUtil : NSObject

@property (retain, nonatomic) NSArray *tncShareCookieDomainList;

+ (id)getMatchHost:(id)a0 whiteHostList:(id)a1;
+ (BOOL)isThirdDomain:(id)a0;
+ (id)getMatchReg:(id)a0 regList:(id)a1;
+ (id)decodeUrl:(id)a0;
+ (BOOL)isWholeDomainOrFatherDomain:(id)a0 matchDomainList:(id)a1;
+ (id)sharedInstance;

- (id)obtainTncShareCookieDomainList;
- (BOOL)isInTncShareCookieDomainList:(id)a0;
- (void).cxx_destruct;

@end
