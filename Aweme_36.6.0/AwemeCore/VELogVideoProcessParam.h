@class NSString;

@interface VELogVideoProcessParam : NSObject <NSCopying> {
    struct shared_ptr<TELogVideoProcessParam> { struct TELogVideoProcessParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppImpl;
}

@property (retain, nonatomic) NSString *resourceDir;
@property (nonatomic) BOOL enable;
@property (nonatomic) float intensity;

+ (id)initWithResourceDir:(id)a0;

- (struct shared_ptr<const TELogVideoProcessParam> { struct TELogVideoProcessParam *x0; struct __shared_weak_count *x1; })cppImpl;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
