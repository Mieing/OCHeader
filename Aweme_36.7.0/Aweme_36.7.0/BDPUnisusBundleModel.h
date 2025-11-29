@class BDPUnisusBundleVersionInfo;

@interface BDPUnisusBundleModel : NSObject {
    struct unique_ptr<uni::service::base_bundle::BaseBundleModel, std::default_delete<uni::service::base_bundle::BaseBundleModel>> { struct BaseBundleModel *__ptr_; } innerBundleModel;
}

@property (retain, nonatomic) BDPUnisusBundleVersionInfo *versionInfo;

- (id)readFile:(id)a0;
- (id)initWithInnerBundleModel:(struct unique_ptr<uni::service::base_bundle::BaseBundleModel, std::default_delete<uni::service::base_bundle::BaseBundleModel>> { struct BaseBundleModel *x0; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (const void *)innerModel;

@end
