@class NSString, CKAppConfig;

@interface CKFeatureConfig : NSObject {
    struct shared_ptr<CKFeature::Config> { struct Config *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (retain, nonatomic) CKAppConfig *appConfig;
@property (copy, nonatomic) NSString *dbPath;
@property (nonatomic) int versionCode;
@property (copy, nonatomic) NSString *modelsName;

- (struct shared_ptr<CKFeature::Config> { struct Config *x0; struct __shared_weak_count *x1; })cppModel;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
