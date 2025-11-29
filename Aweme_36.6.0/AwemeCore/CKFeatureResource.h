@class NSString;

@interface CKFeatureResource : NSObject {
    struct shared_ptr<CKFeature::Resource> { struct Resource *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (readonly, copy, nonatomic) NSString *assetId;
@property (nonatomic) struct CGSize { double width; double height; } originSize;

- (struct shared_ptr<CKFeature::Resource> { struct Resource *x0; struct __shared_weak_count *x1; })cppModel;
- (id)initWithAssetId:(id)a0 image:(id)a1;
- (id)initWithAssetId:(id)a0 assetPath:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)assetPath;

@end
