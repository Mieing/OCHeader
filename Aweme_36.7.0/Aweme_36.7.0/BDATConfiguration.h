@class NSDictionary, NSString;

@interface BDATConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSString *customUserAgent;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableDebug;

+ (BOOL)isValidPlistObject:(id)a0;
+ (BOOL)isValidPlistDictionary:(id)a0;
+ (void)syncAppLuanchOpt;
+ (id)defaultConfig;

- (id)dictionaryValue:(id)a0;
- (id)configuration:(id)a0;
- (void)updateDefaultConfig;
- (void)synConfiguration:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setupConfig;

@end
