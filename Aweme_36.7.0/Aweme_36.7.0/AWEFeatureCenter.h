@class NSMutableOrderedSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEFeatureCenter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (retain, nonatomic) NSMutableDictionary *instanceConfigDictionary;
@property (retain, nonatomic) NSMutableOrderedSet *commonContext;

+ (id)es_defaultCenter;
+ (id)shareInstance;

- (id)featureForIdentifier:(id)a0 withContext:(id)a1;
- (id)recognizeDIProperty:(id)a0;
- (void)addCommonContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)registerClass:(Class)a0;

@end
