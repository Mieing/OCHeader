@class NSString, NSArray, NSDictionary;

@interface DAVResource_OC : NSObject

@property (nonatomic) struct shared_ptr<davinci::resource::DAVResource> { struct DAVResource *__ptr_; struct __shared_weak_count *__cntrl_; } internalResource;
@property (copy, nonatomic) NSString *resourceFile;
@property (readonly, copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSArray *dependResource;
@property (readonly, nonatomic) BOOL isFromCache;
@property (readonly, copy, nonatomic) NSDictionary *extraMap;

- (id)initWithCPPValue:(struct shared_ptr<davinci::resource::DAVResource> { struct DAVResource *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithURS:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
