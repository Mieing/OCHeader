@class NSString, NSBundle;

@interface FBSDKInternalUtility : NSObject

@property (class, readonly, copy, nonatomic) NSString *appURLScheme;
@property (class, readonly, nonatomic) NSBundle *bundleForStrings;
@property (class, readonly, nonatomic) unsigned long long currentTimeInMilliseconds;
@property (class, readonly, nonatomic) struct { long long x0; long long x1; long long x2; } operatingSystemVersion;
@property (class, readonly, nonatomic) BOOL shouldManuallyAdjustOrientation;
@property (class, readonly, nonatomic) BOOL isUnity;
@property (class, readonly, nonatomic) BOOL isFacebookAppInstalled;
@property (class, readonly, nonatomic) BOOL isMessengerAppInstalled;
@property (class, readonly, nonatomic) BOOL isMSQRDPlayerAppInstalled;

+ (id)appURLWithHost:(id)a0 path:(id)a1 queryParameters:(id)a2 error:(id *)a3;
+ (id)gzip:(id)a0;
+ (id)dictionaryFromFBURL:(id)a0;
+ (id)dictionaryWithQueryString:(id)a0;
+ (id)convertRequestValue:(id)a0;
+ (void)extractPermissionsFromResponse:(id)a0 grantedPermissions:(id)a1 declinedPermissions:(id)a2 expiredPermissions:(id)a3;
+ (id)facebookURLWithHostPrefix:(id)a0 path:(id)a1 queryParameters:(id)a2 error:(id *)a3;
+ (id)facebookURLWithHostPrefix:(id)a0 path:(id)a1 queryParameters:(id)a2 defaultVersion:(id)a3 error:(id *)a4;
+ (BOOL)isBrowserURL:(id)a0;
+ (BOOL)isFacebookBundleIdentifier:(id)a0;
+ (BOOL)isOSRunTimeVersionAtLeast:(struct { long long x0; long long x1; long long x2; })a0;
+ (BOOL)isSafariBundleIdentifier:(id)a0;
+ (BOOL)isUIKitLinkTimeVersionAtLeast:(int)a0;
+ (BOOL)isUIKitRunTimeVersionAtLeast:(int)a0;
+ (int)getMajorVersionFromFullLibraryVersion:(int)a0;
+ (BOOL)object:(id)a0 isEqualToObject:(id)a1;
+ (id)objectForJSONString:(id)a0 error:(id *)a1;
+ (id)queryStringWithDictionary:(id)a0 error:(id *)a1 invalidObjectHandler:(id /* block */)a2;
+ (id)URLDecode:(id)a0;
+ (id)URLEncode:(id)a0;
+ (id)URLWithScheme:(id)a0 host:(id)a1 path:(id)a2 queryParameters:(id)a3 error:(id *)a4;
+ (void)deleteFacebookCookies;
+ (void)registerTransientObject:(id)a0;
+ (void)unregisterTransientObject:(id)a0;
+ (id)viewControllerForView:(id)a0;
+ (long long)_compareOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0 toVersion:(struct { long long x0; long long x1; long long x2; })a1;
+ (BOOL)_canOpenURLScheme:(id)a0;
+ (void)validateAppID;
+ (id)validateRequiredClientAccessToken;
+ (void)validateURLSchemes;
+ (void)validateFacebookReservedURLSchemes;
+ (id)findWindow;
+ (id)topMostViewController;
+ (id)hexadecimalStringFromData:(id)a0;
+ (BOOL)isRegisteredURLScheme:(id)a0;
+ (void)checkRegisteredCanOpenURLScheme:(id)a0;
+ (BOOL)isRegisteredCanOpenURLScheme:(id)a0;
+ (BOOL)isPublishPermission:(id)a0;
+ (BOOL)areAllPermissionsReadPermissions:(id)a0;
+ (BOOL)areAllPermissionsPublishPermissions:(id)a0;

@end
