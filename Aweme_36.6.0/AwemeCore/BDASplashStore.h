@class NSDictionary;

@interface BDASplashStore : NSObject

@property (copy, nonatomic) NSDictionary *allParams;

+ (id)sharedInstance;

- (void)registerParams:(id)a0;
- (id)splashRequestCommonParams;
- (id)splashNetworkType;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (id)sdkVersion;

@end
