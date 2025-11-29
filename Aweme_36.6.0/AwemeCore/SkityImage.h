@class UIImage;

@interface SkityImage : NSObject {
    struct shared_ptr<skity::Image> { struct Image *__ptr_; struct __shared_weak_count *__cntrl_; } _gpuImage;
}

@property (readonly, nonatomic) UIImage *image;

- (id)initWithImage:(id)a0 context:(id)a1;
- (id)initLazyWithImage:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (void *)handler;
- (id).cxx_construct;

@end
