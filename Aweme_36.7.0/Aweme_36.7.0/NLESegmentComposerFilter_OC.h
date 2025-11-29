@interface NLESegmentComposerFilter_OC : NLESegmentFilter_OC {
    struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } _nodePaths;
}

@property (nonatomic) struct shared_ptr<cut::model::NLESegmentComposerFilter> { struct NLESegmentComposerFilter *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) long long status;
@property (nonatomic) BOOL enableOptUpdate;
@property (nonatomic) long long fixedTime;
@property (nonatomic) BOOL isDynamic;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegmentComposerFilter> { struct NLESegmentComposerFilter *x0; struct __shared_weak_count *x1; })a0;
- (void)setEffectExtra:(id)a0;
- (id)effectExtra;
- (void)setEffectTags:(id)a0;
- (id)effectTags;
- (id)getNodePaths;
- (void)setNodePaths:(id)a0;
- (void)setRenderCacheTextures:(id)a0;
- (id)renderCacheTextures;
- (void)setRenderCacheStrings:(id)a0;
- (id)renderCacheStrings;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
