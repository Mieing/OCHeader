@class NSString;

@interface CSJApp : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) unsigned long long userfulOpenSDK;
@property (copy, nonatomic) NSString *appScheme;

+ (id)currentApp;

- (id)getAppScheme;
- (void)loadCurrentAppInfo;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;

@end
