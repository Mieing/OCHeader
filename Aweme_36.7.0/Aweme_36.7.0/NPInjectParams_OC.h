@class NSString;

@interface NPInjectParams_OC : NSObject {
    struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (readonly, nonatomic) struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *x0; struct __shared_weak_count *x1; } cppValue;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSString *accessKey;
@property (readonly, copy, nonatomic) NSString *appVersion;
@property (readonly, copy, nonatomic) NSString *effectSdkVersion;
@property (readonly, copy, nonatomic) NSString *devicePlatform;
@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *effectDomain;
@property (readonly, copy, nonatomic) NSString *cacheDir;
@property (readonly, copy, nonatomic) NSString *deviceId;
@property (readonly, copy, nonatomic) NSString *deviceType;
@property (readonly, copy, nonatomic) NSString *region;
@property (readonly, copy, nonatomic) NSString *appLanguage;
@property (readonly, copy, nonatomic) NSString *deviceScore;
@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy, nonatomic) NSString *networkState;
@property (readonly, copy, nonatomic) NSString *gameplaySettings;

- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPInjectParams> { struct NPInjectParams *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithAppID:(id)a0 accessKey:(id)a1 appVersion:(id)a2 effectSdkVersion:(id)a3 host:(id)a4 effectDomain:(id)a5 channel:(id)a6 region:(id)a7 deviceID:(id)a8 devicePlatform:(id)a9 deviceType:(id)a10 cacheDir:(id)a11 deviceScore:(id)a12 appLanguage:(id)a13 networkState:(id)a14 gameplaySettings:(id)a15;
- (void)setRequestHeaderFields:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
