@class NSMutableDictionary;

@interface AWEModelDeletedPropertyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *propertyInfoCache;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwlock;

+ (id)sharedManager;

- (id)deletedPropertyInfosForModelClass:(Class)a0;
- (id)parsePropertyInfoFromFile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
