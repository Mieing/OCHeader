@class NSString;

@interface YYWKSchemeGuardModel : NSObject

@property (nonatomic) BOOL hasNonGameHost;
@property (nonatomic) BOOL enableCustomHttpSchemeFailed;
@property (nonatomic) BOOL registerCustomHttpSchemeFailed;
@property (nonatomic) BOOL isSchemeGameWkWebViewVisible;
@property (nonatomic) int gameWkWebViewCrashCt;
@property (nonatomic) int continuousCrash;
@property (retain, nonatomic) NSString *nonGameHostMainUrl;
@property (retain, nonatomic) NSString *nonGameHostReourceUrl;
@property (nonatomic) double lastDisableTime;

- (void).cxx_destruct;

@end
