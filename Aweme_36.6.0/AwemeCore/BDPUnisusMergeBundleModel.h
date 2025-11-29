@class BDPUnisusBundleModel, NSDictionary;

@interface BDPUnisusMergeBundleModel : NSObject

@property (retain, nonatomic) BDPUnisusBundleModel *baseBundleModel;
@property (retain, nonatomic) NSDictionary *bizBundleModelMap;

- (id)initWithMergeBundleModel:(struct unique_ptr<uni::service::base_bundle::MergeBundleModel, std::default_delete<uni::service::base_bundle::MergeBundleModel>> { struct MergeBundleModel *x0; })a0;
- (void).cxx_destruct;

@end
