@class NSString;

@interface CJPayBizParam : NSObject

@property (copy, nonatomic) id /* block */ riskInfoBlock;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *configHost;

+ (id)shared;

- (void)setupTrackerDelegate:(id)a0;
- (void)setupLanguage:(unsigned long long)a0;
- (void)setupAppInfoConfig:(id)a0;
- (void)setupRiskInfoBlock:(id /* block */)a0;
- (void)cleanCookies;
- (void)setupCookieWith:(id /* block */)a0;
- (void).cxx_destruct;

@end
