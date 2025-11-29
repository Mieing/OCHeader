@class NSString;

@interface MidasPayKit.MidasPayAPI : NSObject {
    void /* unknown type, empty encoding */ currentUniversalLink;
}

@property (nonatomic) void /* unknown type, empty encoding */ currentEnvrionment;
@property (nonatomic) void /* unknown type, empty encoding */ currentLocale;
@property (nonatomic, copy) NSString *currentUniversalLink;

+ (id)sharedInstance;
+ (void)setRuntimeDelegateWithDelegate:(id)a0;
+ (void)setTrackerInfoWithDomain:(id)a0 path:(id)a1;
+ (void)setCustomLoadingWithLoading:(id)a0;
+ (void)clearMemory;
+ (BOOL)handleOpenURLWithUrl:(id)a0 sourceApplication:(id)a1;
+ (BOOL)handleOpenUniversalLinkWithUserActivity:(id)a0;

- (id)init;
- (void)payWithContent:(id)a0 forUser:(id)a1 completion:(id /* block */)a2;
- (void)signWithContent:(id)a0 forUser:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
