@class NSString;
@protocol MediaNetworkDelegate, MediaThreadDelegate;

@interface CKAppConfig : NSObject {
    struct shared_ptr<CK::AppConfig> { struct AppConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *sdkVersion;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *cacheDir;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) id /* block */ requestHeaderFieldBlock;
@property (retain, nonatomic) id<MediaNetworkDelegate> networkDelegate;
@property (retain, nonatomic) id<MediaThreadDelegate> threadDelegate;

- (id)initWithCppModel:(void *)a0;
- (struct shared_ptr<CK::AppConfig> { struct AppConfig *x0; struct __shared_weak_count *x1; })cppModel;
- (void)setLogger:(id)a0 level:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
