@class NSString, NSDictionary, NSArray;

@interface ITMConfig : NSObject {
    struct shared_ptr<ILASDK::BaseConfig> { struct BaseConfig *__ptr_; struct __shared_weak_count *__cntrl_; } scanConfig;
}

@property (copy, nonatomic) NSString *dbPath;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceName;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *platform;
@property (nonatomic) unsigned long long maxDecodeCount;
@property (nonatomic) unsigned long long maxVideoFrameCount;
@property (nonatomic) unsigned long long maxCVThreadCount;
@property (nonatomic) struct CGSize { double width; double height; } targetCVSize;
@property (nonatomic) BOOL isAutoScan;
@property (retain, nonatomic) NSDictionary *settingConfig;
@property (copy, nonatomic) NSArray *modelInfos;
@property (nonatomic) BOOL enableStrategy;

- (struct shared_ptr<ILASDK::BaseConfig> { struct BaseConfig *x0; struct __shared_weak_count *x1; })targetConfig;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
