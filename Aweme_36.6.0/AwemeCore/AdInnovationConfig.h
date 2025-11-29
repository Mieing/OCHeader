@class NSString;

@interface AdInnovationConfig : NSObject

@property (nonatomic) unsigned long long env;
@property (copy, nonatomic) NSString *netType;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *engineAccessKey;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setup;

@end
