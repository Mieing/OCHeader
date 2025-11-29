@class NSMutableDictionary;

@interface ACCGlobalTemplateMapImpl : NSObject

@property (retain, nonatomic) NSMutableDictionary *templateMap;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

+ (id)shareInstance;

- (void)bindExternalTemplate:(Class)a0 toInternalTemplate:(Class)a1;
- (id)resolveExternalTemplateWithInternalTemplate:(Class)a0;
- (void).cxx_destruct;
- (id)init;

@end
