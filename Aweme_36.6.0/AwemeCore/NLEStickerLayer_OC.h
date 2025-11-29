@interface NLEStickerLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::StickerLayer> { struct StickerLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppStickerLayer;
@property (nonatomic) double alpha;
@property (nonatomic) struct CGSize { double width; double height; } dependSize;

- (id)initWithLayer:(id)a0 resource:(id)a1 infos:(id)a2;
- (id)initWithLayer:(id)a0 resource:(id)a1;
- (id)initWithCPPStickerLayer:(struct shared_ptr<nleimage_api::StickerLayer> { struct StickerLayer *x0; struct __shared_weak_count *x1; })a0;
- (id)getInfos;
- (struct CGSize { double x0; double x1; })getDependSize;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
