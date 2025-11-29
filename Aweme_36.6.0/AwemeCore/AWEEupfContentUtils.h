@class NSArray, NSNumber;

@interface AWEEupfContentUtils : NSObject

@property (copy, nonatomic) NSArray *eupfContentISPConfigs;
@property (retain, nonatomic) NSArray *supportUrlPaths;
@property (nonatomic) unsigned long long lastNetworkState;
@property (retain, nonatomic) NSNumber *epufStatus;

+ (id)sharedInstance;

- (void)doRequest;
- (void)injectRequestInterceptor;
- (void)injectFeatureToRequestUrl:(id)a0;
- (id)newUrlAssemblyWithUrl:(id)a0;
- (id)getTargetISPConfigWith:(id)a0;
- (id)parseCnames:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
