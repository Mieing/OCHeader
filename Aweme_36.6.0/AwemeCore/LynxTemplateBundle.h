@class NSString, NSDictionary;

@interface LynxTemplateBundle : NSObject {
    struct shared_ptr<lynx::tasm::LynxTemplateBundle> { struct LynxTemplateBundle *__ptr_; struct __shared_weak_count *__cntrl_; } template_bundle_;
    NSString *_error;
    NSDictionary *_extraInfo;
}

@property (readonly, nonatomic) NSString *url;

- (id)errorMsg;
- (BOOL)isElementBundleValid;
- (id)initWithTemplate:(id)a0 option:(id)a1;
- (id)initWithTemplate:(id)a0 url:(id)a1;
- (BOOL)constructContext:(int)a0;
- (void)postJsCacheGenerationTask:(id)a0 callback:(id /* block */)a1;
- (id)initWithNativeBundle:(struct shared_ptr<lynx::tasm::LynxTemplateBundle> { struct LynxTemplateBundle *x0; struct __shared_weak_count *x1; })a0;
- (void)postJsCacheGenerationTask:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTemplate:(id)a0;
- (id)extraInfo;
- (void)initWithOption:(id)a0;

@end
