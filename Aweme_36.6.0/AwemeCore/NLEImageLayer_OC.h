@class NSString, NLEResource_OC;

@interface NLEImageLayer_OC : NLELayer_OC

@property (nonatomic) struct shared_ptr<nleimage_api::ImageLayer> { struct ImageLayer *__ptr_; struct __shared_weak_count *__cntrl_; } cppImageLayer;
@property (nonatomic) BOOL replaceable;
@property (nonatomic) BOOL intelligentCutout;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL isMain;
@property (retain, nonatomic) NSString *pathAfterSmartImageMatting;
@property (retain, nonatomic) NSString *image;
@property (readonly, nonatomic) NLEResource_OC *resource;
@property (nonatomic) BOOL transformLayerContent;

- (id)initWithCPPImageLayer:(struct shared_ptr<nleimage_api::ImageLayer> { struct ImageLayer *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithId:(id)a0 image:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
