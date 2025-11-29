@class NSString, NSSet, NSArray;

@interface BDATC2SConfig : NSObject

@property (class, readonly, copy, nonatomic) NSString *defaultUserAgent;

@property (copy, nonatomic) NSSet *redirctionBlockList;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableURLTrackRetry;
@property (copy, nonatomic) NSArray *standardMacros;
@property (copy, nonatomic) NSArray *nonstandardMacros;
@property (copy, nonatomic) NSSet *macroBlackList;
@property (nonatomic) BOOL offlineRetryEnable;
@property (nonatomic) long long sendTimes;
@property (readonly, copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *customUserAgent;

+ (id)defaultConfig;

- (void)setupConfig:(id)a0 error:(id *)a1;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
