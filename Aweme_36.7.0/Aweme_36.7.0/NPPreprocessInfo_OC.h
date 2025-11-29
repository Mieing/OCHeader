@class NSString;

@interface NPPreprocessInfo_OC : NSObject {
    struct shared_ptr<nle::preset::NPPreprocessInfo> { struct NPPreprocessInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (readonly, copy, nonatomic) NSString *sourceMaterialPath;
@property (readonly, nonatomic) unsigned long long preprocessType;
@property (readonly, copy, nonatomic) NSString *preprocessFailMsg;
@property (readonly, copy, nonatomic) NSString *preprocessMaterialPath;
@property (readonly, copy, nonatomic) NSString *mattingWorkSpace;
@property (readonly, copy, nonatomic) NSString *rewindPath;

+ (id)getPreprocessInfosFromCPPArr:(struct vector<std::shared_ptr<nle::preset::NPPreprocessInfo>, std::allocator<std::shared_ptr<nle::preset::NPPreprocessInfo>>> { void *x0; void *x1; void *x2; })a0;

- (struct shared_ptr<nle::preset::NPPreprocessInfo> { struct NPPreprocessInfo *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPNode:(struct shared_ptr<nle::preset::NPPreprocessInfo> { struct NPPreprocessInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
