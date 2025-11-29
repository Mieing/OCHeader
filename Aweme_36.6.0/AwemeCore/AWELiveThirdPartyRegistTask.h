@class NSString;

@interface AWELiveThirdPartyRegistTask : NSObject <HTSBootTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerGecko;
+ (id)liveGeckoSecretKey;
+ (id)resourceVersion;
+ (void)execute;


@end
