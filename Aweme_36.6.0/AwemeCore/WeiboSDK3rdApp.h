@class NSString, NSData;

@interface WeiboSDK3rdApp : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *appKey;
@property (retain, nonatomic) NSString *universalLink;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSString *aid;

+ (id)callbackSchemePrefix;
+ (id)callbackSchemeWithAppKey:(id)a0;
+ (id)dictionaryWithApp:(id)a0;
+ (id)appWithDictionary:(id)a0;
+ (id)currentApp;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAppInstalled;
- (id)callbackScheme;
- (void)debugPrint;

@end
