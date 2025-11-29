@class NSString;

@interface LVPlatform : NSObject {
    struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *osName;
@property (copy, nonatomic) NSString *osVersion;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::PlatformClass> { struct PlatformClass *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
